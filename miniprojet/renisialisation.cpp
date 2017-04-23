#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"
void renisialisation()


{ int i,n;
long cle;
	system("cls");
	printf("\n\n               Voulez vous vraiment reinitialiser le programme ?");
	printf("\n\n IMPORTANT: TOUTES VOS DONNEES VONT PERDUES !");
	printf("\n\n         0: NON\n\n         1: OUI\n\n         ");
	do
		{
		scanf("%d",&n);
		} while(n<0 ||n>1);
system("cls");
switch (n)
{
case	1:
	printf("\n\n\n\n\n          Saisir la cle de licence:  ");
	scanf("%ld",&cle);
system("cls");
if (cle==123456789) 
	{
		remove("patient.data"); 
		printf("\n\n");
	for(i=1;i<81;i++)
{
    printf("|");
    _sleep(30);
			
	}
	printf("\n                         le programme est reinisialise avec succe");
	_sleep(500);
	system("cls");
menu();
}
else { printf("\n         Cle erronee"); _sleep(500); system("cls"); menu(); }
break;

case	0:
	menu();
break;
}
}