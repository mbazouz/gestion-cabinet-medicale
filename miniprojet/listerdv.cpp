#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"

void listerdv()
{
	
    int j,m,a;
    char nom[50];
    Patient nv_patient;
     int i,x,trouve1, trouve2=0;
     FILE *fichier_patient;

	veri(&m,&j,&a);
	
	
	 system("cls");
	 printf("\n\n");
printf("                              ");
putchar(201);
for (i=0;i<21;i++) putchar(205);
putchar(187);
printf("\n");
printf("                               Liste des Rendez-vous\n");
printf("                              ");
putchar(200);
for (i=0;i<21;i++) putchar(205);
putchar(188);

    fichier_patient = fopen("patient.data","r");
	printf("\n\n\n                     Les rendez-vous de la date %d - %d - %d \n",j,m,a);

while(fread(&nv_patient,sizeof(nv_patient),1,fichier_patient)==1)
	{
	

		if((j==nv_patient.rdv.jour) && (m==nv_patient.rdv.mois) &&(a==nv_patient.rdv.annee))
			{	
				trouve2++;
				printf("\n\n*******Patient %d :",trouve2);
				printf(" %s %s",nv_patient.nom,nv_patient.prenom);
			
			}
	}
fclose(fichier_patient);

	printf("\n\n\n\n\aRecherche termine ! \nVous avez trouvez %d rendez-vous",trouve2);
	getch();
	system("cls");
	menu();
    
}
