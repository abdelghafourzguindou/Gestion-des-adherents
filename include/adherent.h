#ifndef ADHERENT_H
#define ADHERENT_H

#include <iostream>
using namespace std;

class adherent
{
    public:

        static int adh_tot;
        string nom,prenom,code;
        void adh_creat_1();///1eme methode
        void adh_creat_2();///2eme methode
        void adh_creat_3();///3eme methode
        void adh_creat_4();///4eme methode
        void adh_stock();///5eme methode
        void adh_print();
        void adh_serch();
        void adh_remov();
        void adh_chang();
        void adh_trie();

        adherent();
        virtual ~adherent();
    protected:
        int i,j,n;
    private:
};

#endif // ADHERENT_H
