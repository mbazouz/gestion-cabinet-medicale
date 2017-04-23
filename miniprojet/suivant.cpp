#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"

void suivant(int trouve, long cin)
{int n;
	printf("\n             0- retour                 1-suivant\n");
	do
		{
		scanf("%d",&n);
		} while(n<0 ||n>1);
		
		if (n==0) menu_recherche();
		else cas(trouve,cin);
}