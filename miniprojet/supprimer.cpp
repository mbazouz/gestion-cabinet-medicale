#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"

void supprimer (long cin)
{
	int j,i;
	Patient nv_patient;
  FILE *fichier_patient, *fichier_patient_temporaire;
  char nom[100], s[100];
  int n=0;


  fichier_patient = fopen ("patient.data", "r");
   
  fichier_patient_temporaire = fopen ("patient_temporaire.data", "w");

  

 while(fread(&nv_patient,sizeof(nv_patient),1,fichier_patient)==1)
 {
	 if 
		 (cin!=nv_patient.carte_identite)
	    
		 fwrite(&nv_patient,sizeof(nv_patient),1,fichier_patient_temporaire);
 }
 
 
  fclose (fichier_patient);
  fclose (fichier_patient_temporaire);
   remove("patient.data");
  rename("patient_temporaire.data", "patient.data");

system("cls");
printf("\n");
 for(i=1;i<81;i++)
{
    printf("|");
    _sleep(30);
}
 

system("cls");
printf("                         \aSuppression termine !\n");
_sleep(2500);
system("cls");
  menu();
 
 
}