#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"

void rechcin()
{
	
    long cin;
    char nom[50];
    Patient nv_patient;
     int i,n,x,trouve1, trouve2=0;
     FILE *fichier_patient;

     printf("\nSaisir le numero de CIN ");
     scanf("%ld",&cin);
	
	
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
	

		if(cin==nv_patient.carte_identite) 
			{	
				trouve2++;
				printf("\n\n*******Patient %d\n",trouve2);
				printf("          Nom: %s\n          Prenom: %s\n          Date de naissance: %d-%d-%d\n          Numero CIN:%ld\n          Date de la premiere visite: %d-%d-%d\n          Date du prochain rendez-vous: %d-%d-%d",nv_patient.nom,nv_patient.prenom,nv_patient.date_naissance.jour,nv_patient.date_naissance.mois,nv_patient.date_naissance.annee,nv_patient.carte_identite,nv_patient.nv_date.jour,nv_patient.nv_date.mois,nv_patient.nv_date.annee,nv_patient.rdv.jour,nv_patient.rdv.mois,nv_patient.rdv.annee);
			
			}
	}

	
		
	

    fclose(fichier_patient);


	printf("\n\n\n\n\aRecherche termine ! \n");

	if (trouve2==0)
	{
		printf("\n la CIN n'existe pas dans la base de donnee");
	_sleep(5500);
		menu_recherche();
		}
	else
	{
		_sleep(2550);
	printf("\n             0- retour                 1-suivant\n");
	do
		{
		scanf("%d",&n);
		} while((n<0) ||(n>1));
		system("cls");
		if (n==0) menu_recherche();
		else menu_patient(cin);
	}
		
}
