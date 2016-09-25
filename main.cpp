#include <iostream>
using namespace std;
#include "adherent.h"///Class Adherent
#include "etudiant.h"///Class Etudiant
#include "fonctionaire.h"///Class Fonctionnaire
#include "menu.h"///Class Menu <<n'est pas important>>
#define max 100///Max des tableaus
#include <stdlib.h>///stadlib.h

adherent O_adh;
etudiant O_etu,T_etu[max];///Objet et tableu des objet de class etudiant
fonctionaire O_fon,T_fon[max];///Objet et tableu des objet de class fonctionnaire
menu O_menu;///Class menu ghir zedto osafi bach ikon lprogramme bien organiser
///Des variable global li 3anst3mel flprograme
int choix,meth;
char ch;
bool rept=true;
string rep;
///Fonction qui permit de repeter le programme
void repet(){
debut:
system("cls");
cout<<"\n\n\n\n\t\tVous voullez vraiment sortir (Yes/No) : ";
cin>>rep;
if(rep=="yes"){rept=false;system("cls");}
else if(rep=="no")rept=true;
else goto debut;
}
///Cette variable est suivez la 5eme Methode
string nom,prenom,code,filiere,fonction,fonctionalite;
///Cette procedure est suivez la 5eme Methode
void stock_adh(){
        cout<<"\n\n\t\tCode : ";
        cin>>code;
        cout<<"\t\tNom : ";
        cin>>nom;
        cout<<"\t\tPrenom : ";
        cin>>prenom;
    if(ch=='e'){
            cout<<"\t\tFiliere : ";
            cin>>filiere;
    }
    if(ch=='f'){
            cout<<"\t\tFonction : ";
            cin>>fonction;
            cout<<"\t\tFonctionalite : ";
            cin>>fonctionalite;
    }
}
///Fonction de traitement genirale
void traitement(){
    while(rept){
    start:system("color 1F");
    O_menu.getColor(2, 0);
    O_menu.menu_adh(&choix,&O_adh.adh_tot,&O_etu.etud_tot,&O_fon.fonc_tot);///L'appelle de menu generale
    switch(choix){
        case 1:a:
            system("cls");
            O_menu.getColor(2, 9);
            O_menu.select(&ch);///Menu select (Etudiant ou Fonctionnaire)
            if(ch=='e'){
                    z:O_menu.methode(&meth);///Menu choix de la methode
                switch(meth){
                    ///LA 1EME METHODE///
                    case 1:system("cls");
                        T_etu[O_etu.etud_tot].adh_creat_1();
                    break;
                    ///LA 2EME METHODE///
                    case 2:system("cls");
                        O_etu.adh_creat_1();
                        T_etu[O_etu.etud_tot].adh_stock(O_etu,T_etu);
                    break;
                    ///LA 3EME METHODE///
                    case 3:system("cls");
                        O_etu.adh_creat_2(O_etu,T_etu);
                    break;
                    ///LA 4EME METHODE///
                    case 4:system("cls");
                        T_etu[O_etu.etud_tot-1]=O_etu.adh_creat_3(O_etu);
                    break;
                    ///LA 5METHODE///
                    case 5:system("cls");
                        stock_adh();
                        T_etu[O_etu.etud_tot].adh_creat_4(code,nom,prenom,filiere);
                    break;
                    case 6:goto start;
                    default:goto z;
            }}
            else if(ch=='f'){
                    x:O_menu.methode(&meth);
                switch(meth){
                    ///La 1eme Methode///
                    case 1:system("cls");
                        T_fon[O_fon.fonc_tot].adh_creat_1();
                    break;
                    ///La 2eme methode///
                    case 2:system("cls");
                        O_fon.adh_creat_1();
                        T_fon[O_fon.fonc_tot].adh_stock(T_fon,O_fon);
                    break;
                    ///La 3eme Methode///
                    case 3:system("cls");
                        O_fon.adh_creat_2(O_fon,T_fon);
                    break;
                    ///La 4eme Methode///
                    case 4:system("cls");
                        T_fon[O_fon.fonc_tot-1]=O_fon.adh_creat_3();
                    break;
                    ///La 5eme Methode///
                    case 5:system("cls");
                        stock_adh();
                        T_fon[O_fon.fonc_tot].adh_creat_4(code,nom,prenom,fonction,fonctionalite);
                    break;
                    case 6:goto start;
                    default:goto x;
            }}
            else if(ch=='s')system("cls");
            else goto a;
        break;
        case 2:b:
            system("cls");O_menu.select(&ch);
            if(ch=='e'){O_etu.adh_print(T_etu,O_etu.etud_tot);system("PAUSE");}
            else if(ch=='f'){O_fon.adh_print(T_fon,O_fon.fonc_tot);system("PAUSE");}
            else if(ch=='s')system("cls");
            else goto b;
        break;
        case 3:c:
            system("cls");O_menu.select(&ch);
            if(ch=='e'){O_etu.adh_serch(T_etu,O_etu.etud_tot);system("PAUSE");}
            else if(ch=='f'){O_fon.adh_serch(T_fon,O_fon.fonc_tot);system("PAUSE");}
            else if(ch=='s')system("cls");
            else goto c;
        break;
        case 4:d:
            system("cls");O_menu.select(&ch);
            if(ch=='e'){O_etu.adh_remov(T_etu,&O_etu.etud_tot);system("PAUSE");}
            else if(ch=='f'){O_fon.adh_remov(T_fon,&O_fon.fonc_tot);system("PAUSE");}
            else if(ch=='s')system("cls");
            else goto d;
        break;
        case 5:e:
            system("cls");O_menu.select(&ch);
            if(ch=='e')O_etu.adh_chang(T_etu,&O_etu.etud_tot);
            else if(ch=='f')O_fon.adh_chang(T_fon,&O_fon.fonc_tot);
            else if(ch=='s')system("cls");
            else goto e;
        break;
        case 6:repet();break;
        default:goto start;break;
    }
}
}

int main()
{
    traitement();
    system("PAUSE>nul");
    return 0;
}
