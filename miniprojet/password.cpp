#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"

void password()
{
	int i;
	long cle;
printf("\n\n");
printf("                           ");
putchar(201);
for (i=0;i<28;i++) putchar(205);

putchar(187);
printf("\n");
printf("                              Saisir la cle de licence\n");
printf("                           ");
putchar(200);
for (i=0;i<28;i++) putchar(205);
putchar(188);

printf("\n\n\n\n\n                          ");
scanf("%ld",&cle);
system("cls");
if (cle==123456789)
{
	printf("                                 \a BIENVENUE \n");
	printf("\n                         GESTION DE CABINET MEDICAL");
	printf("\n\n");
	for(i=1;i<81;i++)
{
    printf("|");
    _sleep(30);
}
system("cls");
menu();
}
else {
	
	printf("\a\n                          Cle erronee\n\a\n\n                          Votre copie n'est pas certfie!"); 
}
}