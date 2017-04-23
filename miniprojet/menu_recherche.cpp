#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"
void menu_recherche ()
{
	int n,i;
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


printf("\n\n");
for (i=0;i<79;i++) putchar(196);
printf("\n\n");


printf("               1-Recherche par nom\n");
printf("               2-Recherche par date de naissance\n");
printf("               3-Recherche par CIN\n");
printf("               4-Retour\n");
printf("\n\n");
for (i=0;i<79;i++) putchar(196);

printf("\n");

printf("\n\n\n\n              ");
do
		{
		scanf("%d",&n);
		} while(n<1 ||n>4);
system("cls");
switch (n)
{
case	1:
	rechnom();
break;

case	2:
	rechdate();
break;
case	3:
	rechcin();
break;
case	4:
	menu();
break;

}


}