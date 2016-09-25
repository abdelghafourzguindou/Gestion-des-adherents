#include "fonctionaire.h"
#include <stdlib.h>
#include <windows.h>

fonctionaire::fonctionaire()
{
    //ctor
}

fonctionaire::~fonctionaire()
{
    //dtor
}

int fonctionaire::fonc_tot=0;
///Coresspand la 1eme methode
void fonctionaire::adh_creat_1(){
        cout<<"\n\n\t\tCode : ";
        cin>>code;
        cout<<"\t\tNom : ";
        cin>>nom;
        cout<<"\t\tPrenom : ";
        cin>>prenom;
        cout<<"\t\tFonction : ";
        cin>>fonction;
        cout<<"\t\tFonctionalite : ";
        cin>>fonctionalite;
        fonc_tot++;
        adherent::adh_tot++;
}
///Coresspand la 2eme methode
void fonctionaire::adh_creat_2(fonctionaire O,fonctionaire *t){
        cout<<"\n\n\t\tCode : ";
        cin>>O.code;
        cout<<"\t\tNom : ";
        cin>>O.nom;
        cout<<"\t\tPrenom : ";
        cin>>O.prenom;
        cout<<"\t\tFonction : ";
        cin>>O.fonction;
        cout<<"\t\tFonctionalite : ";
        cin>>O.fonctionalite;
        fonc_tot++;
        adherent::adh_tot++;
        t[O.fonc_tot-1]=O;
}
///Coresspand la 3eme methode
fonctionaire fonctionaire::adh_creat_3(){
        fonctionaire O;
        cout<<"\n\n\t\tCode : ";
        cin>>O.code;
        cout<<"\t\tNom : ";
        cin>>O.nom;
        cout<<"\t\tPrenom : ";
        cin>>O.prenom;
        cout<<"\t\tFonction : ";
        cin>>O.fonction;
        cout<<"\t\tFonctionalite : ";
        cin>>O.fonctionalite;
        fonc_tot++;
        adherent::adh_tot++;
        return O;
}
///Coresspand la 4eme methode
void fonctionaire::adh_creat_4(string a,string b,string c,string d,string e){
        this->code=a;
        this->nom=b;
        this->prenom=c;
        this->fonction=d;
        this->fonctionalite=e;
        fonc_tot++;
        adherent::adh_tot++;
}
///Coresspand la 5eme methode
void fonctionaire::adh_stock(fonctionaire *t,fonctionaire O){
        t[O.fonc_tot-1]=O;
}
///Fonction simple
void fonctionaire::adh_chang(fonctionaire *t,int *tot){
        system("cls");
        cout<<"\n\n\n\n\t\tEntrer le Code : ";
        cin>>code;
        for(i=0;i<*tot;i++){
            if(t[i].code==code){
                n=1;
                cout<<"\n\n\t\tCode : ";
                cin>>t[i].code;
                cout<<"\t\tNom : ";
                cin>>t[i].nom;
                cout<<"\t\tPrenom : ";
                cin>>t[i].prenom;
                cout<<"\t\tFonction : ";
                cin>>t[i].fonction;
                cout<<"\t\tFonctionalite : ";
                cin>>t[i].fonctionalite;
                system("cls");
                cout<<"\n\n\n\n\n\t\tVotre Fonctionaire est bien Modifier\n\n\n\n\n\n\n"<<endl;
                Sleep(500);system("PAUSE");
            }
            if(i==(*tot-1)&&n==0){
                    cout<<"\n\n\tCe Etudiant N'exist pas dans la base de donnee\n\n\n\n\n\n"<<endl;
                    system("PAUSe");
            }
        }
}
void fonctionaire::adh_print(fonctionaire *t,int tot){
        for(i=0;i<tot;i++){
            cout<<"\n\n\t\t\t########## FONCTIONAIRE "<<i+1<<" ##########\n"<<endl;
            cout<<"\t\t\tCode : "<<t[i].code<<endl;
            cout<<"\t\t\tNom : "<<t[i].nom<<endl;
            cout<<"\t\t\tPrenom : "<<t[i].prenom<<endl;
            cout<<"\t\t\tFonction : "<<t[i].fonction<<endl;
            cout<<"\t\t\tFonctionalite : "<<t[i].fonctionalite<<endl;
        if(i==(tot-1))cout<<"\n\n\n\n"<<endl;
        }
}
void fonctionaire::adh_serch(fonctionaire *t,int tot){
        cout<<"\n\t\tEntrer le code : ";
        cin>>code;
        for(i=0;i<tot;i++){
            if(t[i].code==code){
                n=1;
            cout<<"\n\n\t\t\t########## FONCTIONAIRE "<<i+1<<" ##########\n"<<endl;
            cout<<"\t\t\tCode : "<<t[i].code<<endl;
            cout<<"\t\t\tNom : "<<t[i].nom<<endl;
            cout<<"\t\t\tPrenom : "<<t[i].prenom<<endl;
            cout<<"\t\t\tFonction : "<<t[i].fonction<<endl;
            cout<<"\t\t\tFonctionalite : "<<t[i].fonctionalite<<"\n"<<endl;
            }
            if(i==(tot-1) && n==0)cout<<"\n\n\t\tCette Code ne coresspand aucun fonctionnaire\n\n\n"<<endl;
        }
}
void fonctionaire::adh_remov(fonctionaire *t,int *tot){
        cout<<"\n\n\t\t\tEntrer le code : ";
        cin>>code;
        for(i=0;i<*tot;i++){
            if(t[i].code==code){
                n=1;
                --*tot;
                adherent::adh_tot--;
                for(j=i;j<*tot;j++)t[j]=t[j+1];
                system("cls");
                cout<<"\n\n\n\n\n\n\n\t\t\tVotre fonctionaire est bien supprimer"<<endl;
                Sleep(1000);
            }
            if(i==(*tot-1) && n==0)cout<<"\n\n\t\tCette Code ne coresspand aucun fonctionnaire\n\n\n"<<endl;
        }
}
