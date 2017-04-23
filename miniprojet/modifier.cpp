#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"

void modifier(long cin)
{
		int i;
	 
	  
    Patient nv_patient ;
    FILE* fichier_patient, *fichier_patient_temporaire;


  fichier_patient = fopen ("patient.data", "r");
   
  fichier_patient_temporaire = fopen ("patient_temporaire.data", "w");

  

 while(fread(&nv_patient,sizeof(nv_patient),1,fichier_patient)==1)
 {
	 if (cin!=nv_patient.carte_identite)
	    
		 fwrite(&nv_patient,sizeof(nv_patient),1,fichier_patient_temporaire);

 }
 
  fclose (fichier_patient);
  fclose (fichier_patient_temporaire);
   remove("patient.data");
  rename("patient_temporaire.data", "patient.data");

	
    fichier_patient = fopen("patient.data","a");
	system("cls");
     printf("__________Nom: ");
     scanf("%s",&nv_patient.nom);
     system("cls");
     printf("__________Prenom: ");
     scanf("%s",&nv_patient.prenom);
     system("cls");
     printf("__________Date de naissance: ");
veri(&nv_patient.date_naissance.mois,&nv_patient.date_naissance.jour,&nv_patient.date_naissance.annee);
system("cls");
     printf("__________Numero CIN: ");
     scanf("%ld",&nv_patient.carte_identite);
     system("cls");
printf("__________Date de la premiere visite: ");
veri(&nv_patient.nv_date.mois,&nv_patient.nv_date.jour,&nv_patient.nv_date.annee);
system("cls");
printf("__________Date du prochain rendez vous: ");
veri(&nv_patient.rdv.mois,&nv_patient.rdv.jour,&nv_patient.rdv.annee);


     if (fichier_patient != NULL)
            {


				fwrite(&nv_patient,sizeof(nv_patient),1,fichier_patient);

          
            }
        else
            {
                printf("Impossible d'ouvrir le fichier patient.data");
            }

	 system("cls");
printf("\n");
for(i=1;i<81;i++)
{
    printf("|");
    _sleep(30);
}
system("cls");
printf("                       \aModification termine !\n");
_sleep(2500);
system("cls");




	 fclose(fichier_patient);
	 menu();
}