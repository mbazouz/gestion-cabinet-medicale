#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"

void rechdate()
{
	
    long cin;
    char nom[50];
    Patient nv_patient;
     int j,m,a,i,x,trouve1, trouve2=0;
     FILE *fichier_patient;

	veri(&m,&j,&a);
	
	
	 system("cls");
	 printf("\n\n");
printf("                              ");
putchar(201);
for (i=0;i<21;i++) putchar(205);
putchar(187);
printf("\n");
printf("                                 MENU DE RECHERCHE\n");
printf("                              ");
putchar(200);
for (i=0;i<21;i++) putchar(205);
putchar(188);

    fichier_patient = fopen("patient.data","r");


while(fread(&nv_patient,sizeof(nv_patient),1,fichier_patient)==1)
	{
	

		if((j==nv_patient.date_naissance.jour) && (m==nv_patient.date_naissance.mois) &&(a==nv_patient.date_naissance.annee))
			{	
				trouve2++;
				printf("\n\n*******Patient %d\n",trouve2);
				printf("          Nom: %s\n          Prenom: %s\n          Date de naissance: %d-%d-%d\n          Numero CIN:%ld\n          Date de la premiere visite: %d-%d-%d\n          Date du prochain rendez-vous: %d-%d-%d",nv_patient.nom,nv_patient.prenom,nv_patient.date_naissance.jour,nv_patient.date_naissance.mois,nv_patient.date_naissance.annee,nv_patient.carte_identite,nv_patient.nv_date.jour,nv_patient.nv_date.mois,nv_patient.nv_date.annee,nv_patient.rdv.jour,nv_patient.rdv.mois,nv_patient.rdv.annee);
				cin=nv_patient.carte_identite;
			}
	}
fclose(fichier_patient);
	printf("\n\n\n\n\aRecherche termine ! \nVous avez trouvez %d patient(s)",trouve2);
	if (trouve2==1) menu_patient(cin);
	else suivant(trouve2,cin);
    
}
