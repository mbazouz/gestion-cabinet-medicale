#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"

void menu_param()
{
		int n,i;
printf("\n\n");
printf("                              ");
putchar(201);
for (i=0;i<12;i++) putchar(205);
putchar(187);
printf("\n");
printf("                                PARAMETRES\n");
printf("                              ");
putchar(200);
for (i=0;i<12;i++) putchar(205);
putchar(188);


printf("\n\n");
for (i=0;i<79;i++) putchar(196);
printf("\n\n");


printf("               1-Reinitialisation du programme\n");
printf("               2-Instructions\n");
printf("               3-Contact\n");
printf("               4-Retour\n");
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
	renisialisation();
break;

case	2:
	instruction();
break;
case	3:
	contact();
break;
case	4:
	menu();
break;
}
}