#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <cstddef>
#include <vector>
#include "Trame.h"
#include <stdio.h>
#include "serialib.h"
#include <curl/curl.h>

#ifdef __linux__
#define         DEVICE_PORT             "/dev/ttyUSB0"                         // ttyS0 for linux
#endif

using namespace std;

int main()
{

    cout << "TeleInfo 1.0" << endl<<endl;

    // Décalation des variables
     serialib LS;
     Trame ma_trame;
     Trame *ptrTrame;
     ptrTrame=&ma_trame;
     CURL *curl;
	 CURLcode res;
	 char Buffer1[255];
     char Buffer2[255];
     string message;
     string messageV;
     string filtreD="ADCO";
     string filtreF="MOTDETAT";
     string filtreSpace=" ";
     string filtreLigne="\n";
     string Fcurl;
     int Ret;
     int nombreSpace=0;
     int n=0;

    // Ouverture du port serie
    Ret=LS.Open(DEVICE_PORT,1200);
    if (Ret!=1) {
        printf ("Error while opening port. Permission problem ?\n");
        return Ret;
    }
    printf ("Serial port opened successfully !\n");


    Ret=LS.ReadString(Buffer1,'sdese',255,2000);

        message=Buffer1;
        Ret=LS.ReadString(Buffer2,'sdese',255,2000);
        message=message+Buffer2;

        cout <<"\n### Trame sans traitement ### " <<endl;
        cout <<message;

    // Validation de la Trame
        cout <<"\n### Trame avec traitement ### "<<endl;
        cout <<  ma_trame.CheckTrame(message,filtreD,filtreF);

    // Decoupage
     ma_trame.SplitTrame(message,messageV,ptrTrame);

     // Formatage
     cout << "\n### Formatage des donnees ###" <<endl;
     Fcurl = ma_trame.Formatage(Fcurl, ma_trame);

     // CURL
     cout << "\n ### Envoie des donnees ###"  << endl;

    const char *dataC = Fcurl.c_str();
	curl = curl_easy_init();
	if(curl)
	{
		curl_easy_setopt(curl, CURLOPT_URL, "http://192.168.0.28/SuiviWeb/SuiviWebEdf.php");
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, dataC);
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}
	else
	{
		cerr << "Fail to create curl handle for post method\n";
		exit(1);
	};

    LS.Close();

    return 0;
}

