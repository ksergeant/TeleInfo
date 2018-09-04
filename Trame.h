#ifndef TRAME_H
#define TRAME_H
#include <string>

using namespace std;

struct Ligne
{
    string Etiquette;
    string Data;
    string Checksum;
};

class Trame
{
    public:
        Trame();
        string CheckTrame(string& str, string& filtreD, string& filtreF);
        void SplitTrame (string& str, string& str2, Trame *ptrTrame);
        string Formatage(string& Fcurl, Trame ma_trame);
        void setADCO(string & data, string& checksum);
        void setOPTARIF(string& data, string& checksum);
        void setISOUSC(string& data, string& checksum);
        void setBASE(string& data, string& checksum);
        void setHCHC(string& data, string& checksum);
        void setHCHP(string& data, string& checksum);
        void setEJPHN(string& data, string& checksum);
        void setEJPHPM(string& data, string& checksum);
        void setBBR_HC_JB(string& data, string& checksum);
        void setBBR_HP_JB(string& data, string& checksum);
        void setBBR_HC_JW(string& data, string& checksum);
        void setBBR_HP_JW(string& data, string& checksum);
        void setBBR_HC_JR(string& data, string& checksum);
        void setBBR_HP_JR(string& data, string& checksum);
        void setPEJP(string& data, string& checksum);
        void setPTEC(string& data, string& checksum);
        void setIINST(string& data, string& checksum);
        void setADPS(string& data, string& checksum);
        void setIMAX(string& data, string& checksum);
        void setPAPP(string& data, string& checksum);
        void setHHPHC(string& data, string& checksum);
        void setMOTDETAT(string& data, string& checksum);

        void getADCO(string *ptr1, string *ptr2);
        void getOPTARIF(string *ptr1, string *ptr2);
        void getISOUSC(string *ptr1, string* ptr2);
        void getBASE(string *ptr1, string* ptr2);
        void getHCHC(string *ptr1, string* ptr2);
        void getHCHP(string *ptr1, string* ptr2);
        void getEJPHN(string *ptr1, string* ptr2);
        void getEJPHPM(string *ptr1, string* ptr2);
        void getBBR_HC_JB(string *ptr1, string* ptr2);
        void getBBR_HP_JB(string *ptr1, string* ptr2);
        void getBBR_HC_JW(string *ptr1, string* ptr2);
        void getBBR_HP_JW(string *ptr1, string* ptr2);
        void getBBR_HC_JR(string *ptr1, string* ptr2);
        void getBBR_HP_JR(string *ptr1, string* ptr2);
        void getPEJP(string *ptr1, string* ptr2);
        void getPTEC(string *ptr1, string* ptr2);
        void getIINST(string *ptr1, string* ptr2);
        void getADPS(string *ptr1, string* ptr2);
        void getIMAX(string *ptr1, string* ptr2);
        void getPAPP(string *ptr1, string* ptr2);
        void getHHPHC(string *ptr1, string* ptr2);
        void getMOTDETAT(string *ptr1, string* ptr2);
        void getInfo();

        virtual ~Trame();
    protected:
    private:
      Ligne ADCO;
      Ligne OPTARIF;
      Ligne ISOUSC;
      Ligne BASE;
      Ligne HCHC;
      Ligne HCHP;
      Ligne EJPHN;
      Ligne EJPHPM;
      Ligne BBR_HC_JB;
      Ligne BBR_HP_JB;
      Ligne BBR_HC_JW;
      Ligne BBR_HP_JW;
      Ligne BBR_HC_JR;
      Ligne BBR_HP_JR;
      Ligne PEJP;
      Ligne PTEC;
      Ligne IINST;
      Ligne ADPS;
      Ligne IMAX;
      Ligne PAPP;
      Ligne HHPHC;
      Ligne MOTDETAT;
};

#endif // TRAME_H
