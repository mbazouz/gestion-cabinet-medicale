#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"
#include <windows.h> 

void ajout()

{ 
  int i;
    Patient nv_patient ;
    FILE* fichier_patient;
	 SYSTEMTIME t; 
GetSystemTime(&t); 
    fichier_patient = fopen("patient.data","a");

     printf("donnez le nom \n");
	
	 scanf("%s",&nv_patient.nom);
	 system("cls");
     printf("donnez le prenom\n");
    scanf("%s",&nv_patient.prenom);
	 scanf("%[^\n]",&nv_patient.prenom);
     system("cls");
     printf("donnez la date de naissance\n");
veri(&nv_patient.date_naissance.mois,&nv_patient.date_naissance.jour,&nv_patient.date_naissance.annee);
system("cls");
     printf("donnez le numero de la carte d'identite nationale\n");
     scanf("%ld",&nv_patient.carte_identite);
     system("cls");

	nv_patient.nv_date.annee=t.wYear;
	 nv_patient.nv_date.jour=t.wDay;
	 nv_patient.nv_date.mois=t.wMonth;
system("cls");

	 nv_patient.rdv.annee=t.wYear;
	 nv_patient.rdv.jour=t.wDay;
	 nv_patient.rdv.mois=t.wMonth;

     if (fichier_patient != NULL)
            {


				fwrite(&nv_patient,sizeof(nv_patient),1,fichier_patient);

          
            }
        else
            {
                printf("Impossible d'ouvrir le fichier patient.data");
            }
	 fclose(fichier_patient);


system("cls");
printf("\n");
for(i=1;i<81;i++)
{
    printf("|");
    _sleep(30);
}
system("cls");
printf("  \a                  l'ajout du %s %s est realise avec succe\n",nv_patient.prenom,nv_patient.nom);
_sleep(2500);
system("cls");
menu();



}