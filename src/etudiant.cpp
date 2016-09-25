#include "etudiant.h"
#include <stdlib.h>
#include <windows.h>

etudiant::etudiant()
{
    //ctor
}

etudiant::~etudiant()
{
    //dtor
}
int etudiant::etud_tot=0;
///Coresspand la 1eme methode
void etudiant::adh_creat_1(){
        cout<<"\n\n\t\tCode : ";
        cin>>code;
        cout<<"\t\tNom : ";
        cin>>nom;
        cout<<"\t\tPrenom : ";
        cin>>prenom;
        cout<<"\t\tFiliere : ";
        cin>>filiere;
        etud_tot++;
        adherent::adh_tot++;
}
///Coresspand la 2eme methode
void etudiant::adh_creat_2(etudiant O,etudiant *t){
        cout<<"\n\n\t\tCode : ";
        cin>>O.code;
        cout<<"\t\tNom : ";
        cin>>O.nom;
        cout<<"\t\tPrenom : ";
        cin>>O.prenom;
        cout<<"\t\tFiliere : ";
        cin>>O.filiere;
        O.etud_tot++;
        adherent::adh_tot++;
        t[this->etud_tot-1]=O;
}
///Coresspand la 3eme methode
etudiant etudiant::adh_creat_3(etudiant O){
        //etudiant O;
        cout<<"\n\n\t\tCode : ";
        cin>>O.code;
        cout<<"\t\tNom : ";
        cin>>O.nom;
        cout<<"\t\tPrenom : ";
        cin>>O.prenom;
        cout<<"\t\tFiliere : ";
        cin>>O.filiere;
        O.etud_tot++;
        adherent::adh_tot++;
        return O;
}
///Coresspand la 4eme methode
void etudiant::adh_creat_4(string a,string b,string c,string d){
        this->code=a;
        this->nom=b;
        this->prenom=c;
        this->filiere=d;
        etud_tot++;
        adherent::adh_tot++;
}
///Coresspand la 5eme methode
void etudiant::adh_stock(etudiant O,etudiant *t){
        t[this->etud_tot-1]=O;
}
///les reste sont les methode simple Aficher/suprimer/serch/Chang
void etudiant::adh_chang(etudiant *t,int *tot){
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
                cout<<"\t\tFiliere : ";
                cin>>t[i].filiere;
                system("cls");
                cout<<"\n\n\n\n\n\t\tVotre Etudiant est bien Modifier\n\n\n\n\n\n\n"<<endl;
                Sleep(500);system("PAUSE");
            }
            if(i==(*tot-1)&&n==0){
                    cout<<"\n\n\tCe Etudiant N'exist pas dans la base de donnee\n\n\n\n\n\n"<<endl;
                    system("PAUSe");
            }
        }
}

void etudiant::adh_print(etudiant *t,int tot){
        for(i=0;i<tot;i++){
            cout<<"\n\n\t\t\t########## ETUDIANT "<<i+1<<" ##########\n"<<endl;
            cout<<"\t\t\tCode : "<<t[i].code<<endl;
            cout<<"\t\t\tNom : "<<t[i].nom<<endl;
            cout<<"\t\t\tPrenom : "<<t[i].prenom<<endl;
            cout<<"\t\t\tFiliere : "<<t[i].filiere<<endl;
        if(i==(tot-1))cout<<"\n\n\n\n"<<endl;
        }
}
void etudiant::adh_serch(etudiant *t,int tot){
        cout<<"\n\t\tEntrer le code : ";
        cin>>code;
        for(i=0;i<tot;i++){
            if(t[i].code==code){
                n=1;
            cout<<"\n\n\t\t\t########## ETUDIANT "<<i+1<<" ##########\n"<<endl;
            cout<<"\t\t\tCode : "<<t[i].code<<endl;
            cout<<"\t\t\tNom : "<<t[i].nom<<endl;
            cout<<"\t\t\tPrenom : "<<t[i].prenom<<endl;
            cout<<"\t\t\tFiliere : "<<t[i].filiere<<"\n"<<endl;
            }
            if(i==(tot-1) && n==0)cout<<"\n\n\t\tCette Code ne coresspand aucun etudiant\n\n\n"<<endl;
        }
}
void etudiant::adh_remov(etudiant *t,int *tot){
        cout<<"\n\n\t\t\tEntrer le code : ";
        cin>>code;
        for(i=0;i<*tot;i++){
            if(t[i].code==code){
                n=1;
                --*tot;
                adherent::adh_tot--;
                for(j=i;j<*tot;j++)t[j]=t[j+1];
                system("cls");
                cout<<"\n\n\n\n\n\n\n\t\t\tVotre etudiant est bien supprimer\n\n\n\n\n"<<endl;
                Sleep(1000);
            }
           if(i==(*tot-1) && n==0)cout<<"\n\n\t\tCette Code ne coresspand aucun etudiant\n\n\n"<<endl;
        }
}
