#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"

void rdvous(long cin)
{
		int i;
	
	  
    Patient nv_patient, patient_nv ;
    FILE* fichier_patient, *fichier_patient_temporaire;
	char nom[50];
	  
	

  fichier_patient = fopen ("patient.data", "r");
   
  fichier_patient_temporaire = fopen ("patient_temporaire.data", "w");

  

 while(fread(&nv_patient,sizeof(nv_patient),1,fichier_patient)==1)
 {
	 if (cin!=nv_patient.carte_identite)
	    
		 fwrite(&nv_patient,sizeof(nv_patient),1,fichier_patient_temporaire);
	 else {
		 *patient_nv.nom=*nv_patient.nom;
	 *patient_nv.prenom=*nv_patient.prenom;
	
	 patient_nv.date_naissance.annee=nv_patient.date_naissance.annee;
	   patient_nv.date_naissance.jour=nv_patient.date_naissance.jour;
	    patient_nv.date_naissance.mois=nv_patient.date_naissance.mois;
		patient_nv.carte_identite=nv_patient.carte_identite;
		patient_nv.nv_date.jour=nv_patient.nv_date.jour;
		patient_nv.nv_date.mois=nv_patient.nv_date.mois;
		patient_nv.nv_date.annee=nv_patient.nv_date.annee;
		  patient_nv.rdv.jour=nv_patient.rdv.jour;
		  patient_nv.rdv.mois=nv_patient.rdv.mois;
		  patient_nv.rdv.annee=nv_patient.rdv.annee;
	 }

 }
 
  fclose (fichier_patient);
  fclose (fichier_patient_temporaire);
   remove("patient.data");
  rename("patient_temporaire.data", "patient.data");

	
    fichier_patient = fopen("patient.data","a");
	
  *nv_patient.nom=*patient_nv.nom;
  *nv_patient.prenom=*patient_nv.prenom;
  nv_patient.carte_identite=patient_nv.carte_identite;
  nv_patient.date_naissance.jour=patient_nv.date_naissance.jour;
  nv_patient.date_naissance.mois=patient_nv.date_naissance.mois;
  nv_patient.date_naissance.annee=patient_nv.date_naissance.annee;
  nv_patient.nv_date.jour=patient_nv.nv_date.jour;
  nv_patient.nv_date.mois=patient_nv.nv_date.mois;
  nv_patient.nv_date.annee=patient_nv.nv_date.annee;
  
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
	 fclose(fichier_patient);
	 system("cls");
printf("\n");
for(i=1;i<81;i++)
{
    printf("|");
    _sleep(30);
}
system("cls");
printf("                       \aRendez-vous enregistre !\n");
_sleep(2500);
system("cls");
	 menu();
 }

  
