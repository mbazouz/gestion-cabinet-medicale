#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"
void menu_patient (long cin)
{
	int n,i;
printf("\n\n");
for (i=0;i<79;i++) putchar(196);
printf("\n\n");


printf("               1-Donner un rendez-vous\n");
printf("               2-Modifier\n");
printf("               3-Supprimer\n");
printf("               4-Retour\n");
printf("\n\n");
for (i=0;i<79;i++) putchar(196);

printf("\n");

do

scanf("%d",&n);
while ((n>4) || (n<1));
	system("cls");
switch (n)
{
case	1:
	rdvous(cin);
break;

case	2:
	modifier(cin);
break;
case	3:
	supprimer(cin);
break;
case	4:
	menu();
}
}