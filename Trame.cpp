#include "Trame.h"
#include <iostream>

Trame::Trame()
{
       ADCO.Etiquette="ADCO";

       OPTARIF.Etiquette="OPTARIF";

       ISOUSC.Etiquette="ISOUSC";

       BASE.Etiquette="BASE";

       HCHC.Etiquette="HCHC";
       HCHC.Data="0";
       HCHC.Checksum="0";

       HCHP.Etiquette="HCHP";
       HCHP.Data="0";
       HCHP.Checksum="0";

       EJPHN.Etiquette="EJPHN";
       EJPHN.Data="0";
       EJPHN.Checksum="0";

       EJPHPM.Etiquette="EJPHPM";
       EJPHPM.Data="0";
       EJPHPM.Checksum="0";

       BBR_HC_JB.Etiquette="BBRHCJB";
       BBR_HC_JB.Data="0";
       BBR_HC_JB.Checksum="0";

       BBR_HP_JB.Etiquette="BBRHPJB";
       BBR_HP_JB.Data="0";
       BBR_HP_JB.Checksum="0";

       BBR_HC_JW.Etiquette="BBRHCJW";
       BBR_HC_JW.Data="0";
       BBR_HC_JW.Checksum="0";

       BBR_HP_JW.Etiquette="BBRHPJW";
       BBR_HP_JW.Data="0";
       BBR_HP_JW.Checksum="0";

       BBR_HC_JR.Etiquette="BBRHCJR";
       BBR_HC_JR.Data="0";
       BBR_HC_JR.Checksum="0";

       BBR_HP_JR.Etiquette="BBRHPJR";
       BBR_HP_JR.Data="0";
       BBR_HP_JR.Checksum="0";

       PEJP.Etiquette="PEJP";
       PEJP.Data="0";
       PEJP.Checksum="0";

       PTEC.Etiquette="PTEC";

       IINST.Etiquette="IINST";

       ADPS.Etiquette="ADPS";
       ADPS.Data="0";
       ADPS.Checksum="0";

       IMAX.Etiquette="IMAX";

       PAPP.Etiquette="PAPP";

       HHPHC.Etiquette="HHPHC";
       HHPHC.Data="0";
       HHPHC.Checksum="0";

       MOTDETAT.Etiquette="MOTDETAT";

}

Trame::~Trame()
{
    //dtor
}

void Trame::setADCO(string& data, string& checksum)
{
    ADCO.Data=data;
    ADCO.Checksum=checksum;

}

void Trame::setOPTARIF(string& data, string& checksum)
{
    OPTARIF.Data=data;
    OPTARIF.Checksum=checksum;
}

void Trame::setISOUSC(string& data, string& checksum)
{
    ISOUSC.Data=data;
    ISOUSC.Checksum=checksum;
}

void Trame::setBASE(string& data, string& checksum)
{
    BASE.Data=data;
    BASE.Checksum=checksum;
}

void Trame::setHCHC(string& data, string& checksum)
{
    HCHC.Data=data;
    HCHC.Checksum=checksum;
}

void Trame::setHCHP(string& data, string& checksum)
{
    HCHP.Data=data;
    HCHP.Checksum=checksum;
}

void Trame::setEJPHN(string& data, string& checksum)
{
    EJPHN.Data=data;
    EJPHN.Checksum=checksum;
}

void Trame::setEJPHPM(string& data, string& checksum)
{
    OPTARIF.Data=data;
    OPTARIF.Checksum=checksum;
}

void Trame::setBBR_HC_JB(string& data, string& checksum)
{
    BBR_HC_JB.Data=data;
    BBR_HC_JB.Checksum=checksum;
}

void Trame::setBBR_HP_JB(string& data, string& checksum)
{
    BBR_HP_JB.Data=data;
    BBR_HP_JB.Checksum=checksum;
}

void Trame::setBBR_HC_JW(string& data, string& checksum)
{
    BBR_HC_JW.Data=data;
    BBR_HC_JW.Checksum=checksum;
}

void Trame::setBBR_HP_JW(string& data, string& checksum)
{
    BBR_HP_JW.Data=data;
    OPTARIF.Checksum=checksum;
}

void Trame::setBBR_HC_JR(string& data, string& checksum)
{
    BBR_HC_JR.Data=data;
    BBR_HC_JR.Checksum=checksum;
}

void Trame::setBBR_HP_JR(string& data, string& checksum)
{
    BBR_HP_JR.Data=data;
    BBR_HP_JR.Checksum=checksum;
}

void Trame::setPEJP(string& data, string& checksum)
{
    PEJP.Data=data;
    PEJP.Checksum=checksum;
}

void Trame::setPTEC(string& data, string& checksum)
{
    PTEC.Data=data;
    PTEC.Checksum=checksum;
}

void Trame::setIINST(string& data, string& checksum)
{
    IINST.Data=data;
    IINST.Checksum=checksum;
}

void Trame::setADPS(string& data, string& checksum)
{
    ADPS.Data=data;
    ADPS.Checksum=checksum;
}

void Trame::setIMAX(string& data, string& checksum)
{
    IMAX.Data=data;
    IMAX.Checksum=checksum;
}

void Trame::setPAPP(string& data, string& checksum)
{
    PAPP.Data=data;
    PAPP.Checksum=checksum;
}

void Trame::setHHPHC(string& data, string& checksum)
{
    HHPHC.Data=data;
    HHPHC.Checksum=checksum;
}

void Trame::setMOTDETAT(string& data, string& checksum)
{

    MOTDETAT.Data=data;
    MOTDETAT.Checksum=checksum;
}

void Trame::getADCO(string *ptr1, string *ptr2)
{
    *ptr1=ADCO.Etiquette;
    *ptr2=ADCO.Data;

}
void Trame::getOPTARIF(string *ptr1, string *ptr2)
{
    *ptr1=OPTARIF.Etiquette;
    *ptr2=OPTARIF.Data;
}
void Trame::getISOUSC(string *ptr1, string* ptr2)
{
    *ptr1=ISOUSC.Etiquette;
    *ptr2=ISOUSC.Data;

}
void Trame::getBASE(string *ptr1, string* ptr2)
{
    *ptr1=BASE.Etiquette;
    *ptr2=BASE.Data;
}
void Trame::getHCHC(string *ptr1, string* ptr2)
{
    *ptr1=HCHC.Etiquette;
    *ptr2=HCHC.Data;
}
void Trame::getHCHP(string *ptr1, string* ptr2)
{
    *ptr1=HCHP.Etiquette;
    *ptr2=HCHP.Data;
}
void Trame::getEJPHN(string *ptr1, string* ptr2)
{
    *ptr1=EJPHN.Etiquette;
    *ptr2=EJPHN.Data;
}
void Trame::getEJPHPM(string *ptr1, string* ptr2)
{
    *ptr1=EJPHPM.Etiquette;
    *ptr2=EJPHPM.Data;
}
void Trame::getBBR_HC_JB(string *ptr1, string* ptr2)
{
    *ptr1=BBR_HC_JB.Etiquette;
    *ptr2=BBR_HC_JB.Data;
}
void Trame::getBBR_HP_JB(string *ptr1, string* ptr2)
{
    *ptr1=BBR_HP_JB.Etiquette;
    *ptr2=BBR_HP_JB.Data;
}
void Trame::getBBR_HC_JW(string *ptr1, string* ptr2)
{
    *ptr1=BBR_HC_JW.Etiquette;
    *ptr2=BBR_HC_JW.Data;
}
void Trame::getBBR_HP_JW(string *ptr1, string* ptr2)
{
    *ptr1=BBR_HP_JW.Etiquette;
    *ptr2=BBR_HP_JW.Data;
}
void Trame::getBBR_HC_JR(string *ptr1, string* ptr2)
{
    *ptr1=BBR_HC_JR.Etiquette;
    *ptr2=BBR_HC_JR.Data;
}
void Trame::getBBR_HP_JR(string *ptr1, string* ptr2)
{
    *ptr1=BBR_HP_JR.Etiquette;
    *ptr2=BBR_HP_JR.Data;
}
void Trame::getPEJP(string *ptr1, string* ptr2)
{
    *ptr1=PEJP.Etiquette;
    *ptr2=PEJP.Data;
}
void Trame::getPTEC(string *ptr1, string* ptr2)
{
    *ptr1=PTEC.Etiquette;
    *ptr2=PTEC.Data;
}
void Trame::getIINST(string *ptr1, string* ptr2)
{
    *ptr1=IINST.Etiquette;
    *ptr2=IINST.Data;
}
void Trame::getADPS(string *ptr1, string* ptr2)
{
    *ptr1=ADPS.Etiquette;
    *ptr2=ADPS.Data;
}
void Trame::getIMAX(string *ptr1, string* ptr2)
{
    *ptr1=IMAX.Etiquette;
    *ptr2=IMAX.Data;
}
void Trame::getPAPP(string *ptr1, string* ptr2)
{
    *ptr1=PAPP.Etiquette;
    *ptr2=PAPP.Data;
}
void Trame::getHHPHC(string *ptr1, string* ptr2)
{
    *ptr1=HHPHC.Etiquette;
    *ptr2=HHPHC.Data;
}
void Trame::getMOTDETAT(string *ptr1, string* ptr2)
{
    *ptr1=MOTDETAT.Etiquette;
    *ptr2=MOTDETAT.Data;
}

void Trame::getInfo()
{   cout <<"\n\n### INFORMATIONS STOCKEES ###" <<endl<<endl;
    //cout <<"\nLigne 1 " <<endl;
    cout <<"Etiquette:     " +ADCO.Etiquette;
    cout <<"      Data:     " +ADCO.Data;
    cout <<"   Checksum:     "+ADCO.Checksum<< endl;

    //cout <<"\nLigne 2 "<<endl;
    cout <<"Etiquette:     " +OPTARIF.Etiquette;
    cout <<"   Data:     " +OPTARIF.Data;
    cout <<"           Checksum:     "+OPTARIF.Checksum<< endl;

    //cout <<"\nLigne 3 "<<endl;
    cout <<"Etiquette:     " +ISOUSC.Etiquette;
    cout <<"    Data:     " +ISOUSC.Data;
    cout <<"             Checksum:     "+ISOUSC.Checksum<< endl;

    //cout <<"\nLigne 4 "<<endl;
    cout <<"Etiquette:     " +BASE.Etiquette;
    cout <<"      Data:     " +BASE.Data;
    cout <<"      Checksum:     "+BASE.Checksum<< endl;

    //cout <<"\nLigne 5 "<<endl;
    cout <<"Etiquette:     " +HCHC.Etiquette;
    cout <<"      Data:     " +HCHC.Data;
    cout <<"              Checksum:     "+HCHC.Checksum<< endl;

    //cout <<"\nLigne 6 "<<endl;
    cout <<"Etiquette:     " +HCHP.Etiquette;
    cout <<"      Data:     " +HCHP.Data;
    cout <<"              Checksum:     "+HCHP.Checksum<< endl;

    //cout <<"\nLigne 7 "<<endl;
    cout <<"Etiquette:     " +EJPHN.Etiquette;
    cout <<"     Data:     " +EJPHN.Data;
    cout <<"              Checksum:     "+EJPHN.Checksum<< endl;

    //cout <<"\nLigne 8 "<<endl;
    cout <<"Etiquette:     " +EJPHPM.Etiquette;
    cout <<"    Data:     " +EJPHPM.Data;
    cout <<"              Checksum:     "+EJPHPM.Checksum<< endl;

    //cout <<"\nLigne 9 "<<endl;
    cout <<"Etiquette:     " +BBR_HC_JB.Etiquette;
    cout <<"   Data:     " +BBR_HC_JB.Data;
    cout <<"              Checksum:     "+BBR_HC_JB.Checksum<< endl;

    //cout <<"\nLigne 10 "<<endl;
    cout <<"Etiquette:     " +BBR_HP_JB.Etiquette;
    cout <<"   Data:     " +BBR_HP_JB.Data;
    cout <<"              Checksum:     "+BBR_HP_JB.Checksum<< endl;

    //cout <<"\nLigne 11 "<<endl;
    cout <<"Etiquette:     " +BBR_HC_JW.Etiquette;
    cout <<"   Data:     " +BBR_HC_JW.Data;
    cout <<"              Checksum:     "+BBR_HC_JW.Checksum<< endl;

    //cout <<"\nLigne 12 "<<endl;
    cout <<"Etiquette:     " +BBR_HP_JW.Etiquette;
    cout <<"   Data:     " +BBR_HP_JW.Data;
    cout <<"              Checksum:     "+BBR_HP_JW.Checksum<< endl;

    //cout <<"\nLigne 13 "<<endl;
    cout <<"Etiquette:     " +BBR_HC_JR.Etiquette;
    cout <<"   Data:     " +BBR_HC_JR.Data;
    cout <<"              Checksum:     "+BBR_HC_JR.Checksum<< endl;

    //cout <<"\nLigne 14 "<<endl;
    cout <<"Etiquette:     " +BBR_HP_JR.Etiquette;
    cout <<"   Data:     " +BBR_HP_JR.Data;
    cout <<"              Checksum:     "+BBR_HP_JR.Checksum<< endl;

    //cout <<"\nLigne 15 "<<endl;
    cout <<"Etiquette:     " +PEJP.Etiquette;
    cout <<"      Data:     " +PEJP.Data;
    cout <<"              Checksum:     "+PEJP.Checksum<< endl;

   //cout <<"\nLigne 16 "<<endl;
    cout <<"Etiquette:     " +PTEC.Etiquette;
    cout <<"      Data:     " +PTEC.Data;
    cout <<"           Checksum:     "+PTEC.Checksum<< endl;

    //cout <<"\nLigne 17 "<<endl;
    cout <<"Etiquette:     " +IINST.Etiquette;
    cout <<"     Data:     " +IINST.Data;
    cout <<"            Checksum:     "+IINST.Checksum<< endl;

    //cout <<"\nLigne 18 "<<endl;
    cout <<"Etiquette:     "+ADPS.Etiquette;
    cout <<"      Data:     " +ADPS.Data;
    cout <<"              Checksum:     "+ADPS.Checksum<< endl;

    //cout <<"\nLigne 19 "<<endl;
    cout <<"Etiquette:     " +IMAX.Etiquette;
    cout <<"      Data:     " +IMAX.Data ;
    cout <<"            Checksum:     "+IMAX.Checksum<< endl;

    //cout <<"\nLigne 20 "<<endl;
    cout <<"Etiquette:     " +PAPP.Etiquette;
    cout <<"      Data:     " +PAPP.Data;
    cout <<"          Checksum:     "+PAPP.Checksum<< endl;

    //cout <<"\nLigne 21 "<<endl;
    cout <<"Etiquette:     " +HHPHC.Etiquette;
    cout <<"     Data:     " +HHPHC.Data;
    cout <<"              Checksum:     "+HHPHC.Checksum<< endl;

    //cout <<"\nLigne 22 "<<endl;
    cout <<"Etiquette:     " +MOTDETAT.Etiquette;
    cout <<"  Data:     " +MOTDETAT.Data;
    cout <<"         Checksum:     "+MOTDETAT.Checksum<< endl<<endl;
}

string Trame::CheckTrame(string& str, string& filtreD, string& filtreF)
{
    size_t found = str.find(filtreD);
    str.erase(0,found);
    size_t found2 = str.find(filtreF);
    size_t found3 = str.find("\n",found2);
    str.erase(found3,string::npos);
    return str;
}

void Trame::SplitTrame (string& str, string& str2, Trame *ptrTrame)
{
  string etiquette;
  string data;
  string checksum;
  Trame trame1;

  size_t found;
  size_t found2;
  size_t found3;
  size_t found4;
  size_t i;
  i=str.length();
  int s=1;
  while (i!=0)
  {
      int c=0;
      etiquette="";
      data="";
      checksum="";
      cout << "\n\n### Decoupage <"<<s<<"> ### "  << '\n';
      // recuperation de la premiere ligne de la trame
      found = str.find_first_of("\n");
      str2=str.substr(0,found);
      //cout <<"\nstr2: "<<str2<<endl;

      // recuperation de l'etiquette
      found2 = str2.find_first_of(" ");
      etiquette=str2.substr(0,found2);
      str2.erase(0,found2+1);

      // recuperation de la data
      found3 = str2.find_first_of(" ");
      data=str2.substr(0,found3);
      str2.erase(0,found3+1);

      //recuperation du checksum
      found4 = str2.find_first_of(" ");
      checksum=str2.substr(0,found4);
      str.erase(0,found+1);

      cout <<"\nReste de la Trame:  i : "<< i<<"\n\n"<<str;

      if (etiquette=="ADCO")
         c=1;
        if (etiquette=="OPTARIF")
            c=2;
            if (etiquette=="ISOUSC")
                c=3;
                if (etiquette=="BASE")
                    c=4;
                    if (etiquette=="HCHC")
                        c=5;
                        if (etiquette=="HCHP")
                            c=6;
                            if (etiquette=="EJPHN")
                                c=7;
                                if (etiquette=="EJPHPM")
                                    c=8;
                                    if (etiquette=="BBRHCJB")
                                        c=9;
                                        if (etiquette=="BBRHPJB")
                                            c=10;
                                            if (etiquette=="BBRHCJW")
                                                c=11;
                                                if (etiquette=="BBRHPJW")
                                                    c=12;
                                                    if (etiquette=="BBRHCJR")
                                                        c=13;
                                                        if (etiquette=="BBRHPJR")
                                                            c=14;
                                                            if (etiquette=="PEJP")
                                                                c=15;
                                                                if (etiquette=="PTEC")
                                                                    c=16;
                                                                    if (etiquette=="IINST")
                                                                        c=17;
                                                                        if (etiquette=="ADPS")
                                                                            c=18;
                                                                            if (etiquette=="IMAX")
                                                                                c=19;
                                                                                if (etiquette=="PAPP")
                                                                                    c=20;
                                                                                    if (etiquette=="HHPHC")
                                                                                        c=21;
                                                                                        if (etiquette=="MOTDETAT")
                                                                                            c=22;


      switch (c)
      {
            case 1:
                        trame1.setADCO(data,checksum);
                        trame1.ADCO.Data=data;
                        trame1.ADCO.Checksum=checksum;
                        cout << "\nStockage reussi" <<endl;

                break;

            case 2:
                        trame1.setOPTARIF(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 3:
                        trame1.setISOUSC(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 4:
                        trame1.setBASE(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 5:
                        trame1.setHCHC(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 6:
                        trame1.setHCHP(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 7:
                        trame1.setEJPHN(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 8:
                        trame1.setEJPHPM(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 9:
                        trame1.setBBR_HC_JB(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 10:
                        trame1.setBBR_HP_JB(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 11:
                        trame1.setBBR_HC_JW(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 12:
                        trame1.setBBR_HP_JW(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 13:
                        trame1.setBBR_HC_JR(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 14:
                        trame1.setBBR_HP_JR(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 15:
                        trame1.setPEJP(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 16:
                        trame1.setPTEC(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 17:
                        trame1.setIINST(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 18:
                        trame1.setADPS(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 19:
                        trame1.setIMAX(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 20:
                        trame1.setPAPP(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 21:
                        trame1.setHHPHC(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            case 22:
                        trame1.setMOTDETAT(data,checksum);
                        cout << "\nStockage reussi" <<endl;

                break;

            default:
                        cout <<"Erreur de stockage"<<endl;
                break;
      }
      s=s+1;

        if (i==17|| i==20 )
        {
            i=0;
        }
        else
        {
            i=str.length();
        }
      }

    *ptrTrame=trame1;
}

string Trame::Formatage(string& Fcurl, Trame ma_trame)
{
    string *ptr1, *ptr2;
    string eti1, eti2, eti3, eti4, eti5, eti6, eti7, eti8, eti9, eti10, eti11, eti12, eti13, eti14, eti15, eti16, eti17, eti18, eti19, eti20, eti21, eti22;
    string data1, data2, data3, data4, data5, data6, data7, data8, data9, data10, data11, data12, data13, data14, data15, data16, data17, data18, data19, data20, data21, data22;

     ptr1=&eti1;
     ptr2=&data1;
     ma_trame.getADCO(ptr1,ptr2);

     ptr1=&eti2;
     ptr2=&data2;
     ma_trame.getOPTARIF(ptr1,ptr2);

     ptr1=&eti3;
     ptr2=&data3;
     ma_trame.getISOUSC(ptr1,ptr2);

     ptr1=&eti4;
     ptr2=&data4;
     ma_trame.getBASE(ptr1,ptr2);

     ptr1=&eti5;
     ptr2=&data5;
     ma_trame.getHCHC(ptr1,ptr2);

     ptr1=&eti6;
     ptr2=&data6;
     ma_trame.getHCHP(ptr1,ptr2);

     ptr1=&eti7;
     ptr2=&data7;
     ma_trame.getEJPHN(ptr1,ptr2);

     ptr1=&eti8;
     ptr2=&data8;
     ma_trame.getEJPHPM(ptr1,ptr2);

     ptr1=&eti9;
     ptr2=&data9;
     ma_trame.getBBR_HC_JB(ptr1,ptr2);

     ptr1=&eti10;
     ptr2=&data10;
     ma_trame.getBBR_HP_JB(ptr1,ptr2);

     ptr1=&eti11;
     ptr2=&data11;
     ma_trame.getBBR_HC_JW(ptr1,ptr2);

     ptr1=&eti12;
     ptr2=&data12;
     ma_trame.getBBR_HP_JW(ptr1,ptr2);

     ptr1=&eti13;
     ptr2=&data13;
     ma_trame.getBBR_HC_JR(ptr1,ptr2);

     ptr1=&eti14;
     ptr2=&data14;
     ma_trame.getBBR_HP_JR(ptr1,ptr2);

     ptr1=&eti15;
     ptr2=&data15;
     ma_trame.getPEJP(ptr1,ptr2);

     ptr1=&eti16;
     ptr2=&data16;
     ma_trame.getPTEC(ptr1,ptr2);

     ptr1=&eti17;
     ptr2=&data17;
     ma_trame.getIINST(ptr1,ptr2);

     ptr1=&eti18;
     ptr2=&data18;
     ma_trame.getADPS(ptr1,ptr2);

     ptr1=&eti19;
     ptr2=&data19;
     ma_trame.getIMAX(ptr1,ptr2);

     ptr1=&eti20;
     ptr2=&data20;
     ma_trame.getPAPP(ptr1,ptr2);

     ptr1=&eti21;
     ptr2=&data21;
     ma_trame.getHHPHC(ptr1,ptr2);

     ptr1=&eti22;
     ptr2=&data22;
     ma_trame.getMOTDETAT(ptr1,ptr2);

    Fcurl = eti1+"="+data1
    +"&"+eti2+"="+data2
    +"&"+eti3+"="+data3
    +"&"+eti4+"="+data4
    +"&"+eti5+"="+data5
    +"&"+eti6+"="+data6
    +"&"+eti7+"="+data7
    +"&"+eti8+"="+data8
    +"&"+eti9+"="+data9

    +"&"+eti10+"="+data10
    +"&"+eti11+"="+data11
    +"&"+eti12+"="+data12
    +"&"+eti13+"="+data13
    +"&"+eti14+"="+data14
    +"&"+eti15+"="+data15
    +"&"+eti16+"="+data16
    +"&"+eti17+"="+data17
    +"&"+eti18+"="+data18
    +"&"+eti19+"="+data19
    +"&"+eti20+"="+data20
    +"&"+eti21+"="+data21
    +"&"+eti22+"="+data22;

    return Fcurl;

}
