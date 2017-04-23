#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"
void menu ()
{
	int n,i;
printf("\n\n");
printf("                              ");
putchar(201);
for (i=0;i<12;i++) putchar(205);

putchar(187);
printf("\n");
printf("                                   MENU\n");
printf("                              ");
putchar(200);
for (i=0;i<12;i++) putchar(205);
putchar(188);


printf("\n\n");
for (i=0;i<79;i++) putchar(196);

printf("\n\n");


printf("               1-Ajouter un Patient\n");
printf("               2-Rechercher un Patient\n");
printf("               3-Liste des Rendez-vous\n");
printf("               4-Parametres\n");
printf("               5-Quitter\n");
printf("\n\n");
for (i=0;i<79;i++) putchar(196);


printf("\n");
printf("\n\n\n\n              ");
do
		{
		scanf("%d",&n);
		} while(n<1 ||n>5);
system("cls");
switch (n)
{
case	1:
	ajout();
break;

case	2:
	menu_recherche();
break;
case	3:
	listerdv();
break;
case	5:
	exit(EXIT_SUCCESS);
break;
case 4:
	menu_param();
	break;
}
}