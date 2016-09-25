#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <iostream>
using namespace std;
#include "adherent.h"

class etudiant:public adherent
{
    public:

        static int adh_tot;
        static int etud_tot;
        string nom,prenom,code;
        string filiere;
        void adh_creat_1();///1eme methode
        void adh_creat_2(etudiant,etudiant*);///2eme methode
        etudiant adh_creat_3(etudiant);///3eme methode
        void adh_creat_4(string,string,string,string);///4eme methode
        void adh_stock(etudiant,etudiant*);///5eme methode
        void adh_print(etudiant*,int);
        void adh_serch(etudiant*,int);
        void adh_remov(etudiant*,int*);
        void adh_chang(etudiant*,int*);
        void adh_trie(etudiant*,int*);

        etudiant();
        virtual ~etudiant();
    protected:
        int i,j,n;
    private:
};

#endif // ETUDIANT_H
