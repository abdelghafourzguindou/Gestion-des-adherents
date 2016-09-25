#include "menu.h"
#include <stdlib.h>

#include <iostream>
using namespace std;

menu::menu()
{
    //ctor
}

menu::~menu()
{
    //dtor
}

void menu::menu_adh(int *a,int *b,int *c,int *d){
    system("cls");
        cout<<"\n\n\n\t#################### GESTION DES ADHERENT ####################\n\t#\t\t\t\t\t\t\t     #"<<endl;
        cout<<"\t#\tTotal Adherents     : "<<*b<<"\t\t\t\t     #"<<endl;
        cout<<"\t#\tTotal Etudiants     : "<<*c<<"\t\t\t\t     #"<<endl;
        cout<<"\t#\tTotal Fonctionaires : "<<*d<<"\t\t\t\t     #"<<"\n\t#\t\t\t\t\t\t\t     #"<<endl;
        cout<<"\t#\t\t1.Ajouter un adherent.........   \t     #"<<endl;
        cout<<"\t#\t\t2.Aficher les adherents.......   \t     #"<<endl;
        cout<<"\t#\t\t3.Rechercher un adherent......   \t     #"<<endl;
        cout<<"\t#\t\t4.Supprimer un adherent.......   \t     #"<<endl;
        cout<<"\t#\t\t5.Changer un adherent.........   \t     #"<<endl;
        cout<<"\t#\t\t6.Quitter.....................  \t     #\n\t#\t\t\t\t\t\t\t     #"<<endl;
        cout<<"\t#\t\t\t\t\t\t\t     #\n\t##############################################################\n"<<endl;
        cout<<"\tVotre choix : ";
        cin>>*a;
}

void menu::methode(int *a){
        system("cls");
        cout<<"\n\n\n\n\t###################### CHOISIR LA METHODE ######################\n"<<endl;
        cout<<"\t\t1.Stockage directement dans un tableau......."<<endl;
        cout<<"\t\t2.L'envoi de l'objet dans un tableu.........."<<endl;
        cout<<"\t\t3.L'objet et le tableau comme des parametres."<<endl;
        cout<<"\t\t4.La fonction create return un Objet........."<<endl;
        cout<<"\t\t5.Les informations comme des parametres......"<<endl;
        cout<<"\t\t6.Pour Sortire...............................\n\n"<<endl;
        cout<<"\t################################################################"<<endl;
        cout<<"\n\tVotre choix : ";
        cin>>*a;
}

void menu::select(char *a){
    cout<<"\n\n\n\n\n\n\t\t\t(e) Pour les etudiants"<<endl;
    cout<<"\t\t\t(f) Pour les fonctionnaires"<<endl;
    cout<<"\t\t\t(s) Pour sortir"<<endl;
    cout<<"\n\t\t\tVotre choix : ";
    cin>>*a;
}

void menu::modifier(int *a){
        system("cls");
        cout<<"\n\n\n\n\t################## MODIFIER UN ADHERANT ##################\n"<<endl;
        cout<<"\t\t1.Modifier tous les informations......."<<endl;
        cout<<"\t\t2.Modifier le Code....................."<<endl;
        cout<<"\t\t3.Modifier le Nom......................"<<endl;
        cout<<"\t\t4.Modifier le Prenom..................."<<endl;
        cout<<"\t\t5.Modifier la Filiere.................."<<endl;
        cout<<"\t\t6.Sortire..............................\n"<<endl;
        cout<<"\t########################################################"<<endl;
        cout<<"\n\tVotre choix : ";
        cin>>*a;
}

void menu::getColor(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}
