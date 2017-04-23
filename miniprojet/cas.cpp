#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"

void cas(int trouve, long cin)
{	int n;
	if (trouve==1) menu_patient(cin);
	else 
		if (trouve==0)
		{	printf("\n             0- retour                 \n");
		do
		{
		scanf("%d",&n);
		} while(n<0 ||n>0);
		if (n==0)
			menu_recherche();}
	{
		printf("\n\aVous avez trouvez plusieurs patients\nIndiquer la CIN convenable pour distinguer");
		printf("\n             0- retour                 1-suivant\n");
		do
		{
		scanf("%d",&n);
		} while(n<0 ||n>1);
		if (n==0)
	
		menu_recherche();

		else
	
		rechcin();
	}

}