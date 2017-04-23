#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"


void contact()

{    int i;
		for(i=1;i<81*4-3;i++)
{
    printf("*");
    _sleep(30);
}

		printf("\n\n              Ce Programme est realise par les eleves ingenieurs :\n\n");
		_sleep(30);
				for(i=1;i<81*2-1;i++)
{
    printf("*");
    _sleep(30);
}

				printf("\n\n\n\n              M.Achref Lakhdar                      M.Mohamed Ben Azouz\n\n             qsdf.1992@gmail.com                   med.b.azouz@gmail.com\n\n\n");
				 _sleep(30);
				for(i=1;i<81*2-1;i++)
{
    printf("*");
    _sleep(30);
}
				printf("\n\a                              Tout droit reserve\n");
				getch();
				system("cls");
			menu_param();

}
