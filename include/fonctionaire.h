#ifndef FONCTIONAIRE_H
#define FONCTIONAIRE_H

#include <iostream>
using namespace std;
#include "adherent.h"

class fonctionaire:public adherent
{
    public:

        static int adh_tot;
        static int fonc_tot;
        string nom,prenom,code;
        void adh_creat_1();///1eme methode
        void adh_creat_2(fonctionaire,fonctionaire*);///2eme methode
        fonctionaire adh_creat_3();///3eme methode
        void adh_creat_4(string,string,string,string,string);///4eme methode
        void adh_stock(fonctionaire*,fonctionaire);///5eme methode
        void adh_print(fonctionaire*,int);
        void adh_serch(fonctionaire*,int);
        void adh_remov(fonctionaire*,int*);
        void adh_chang(fonctionaire*,int*);
        void adh_trie();

        fonctionaire();
        virtual ~fonctionaire();

    protected:
        int i,j,n;
    private:
        string fonction,fonctionalite;
};

#endif // FONCTIONAIRE_H
