#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"

void instruction ()
{
	printf("Les LGC (logiciels de gestions des cabinets medicaux) presentent de nombreuses fonctionnalites integrees, destinees a aider les utilisateurs dans leurs activites quotidiennes.\nCes fonctionnalites couvrent essentiellement:\n          - la gestion des rendez-vous\n          - la gestion des donnees medicales\n          - l’etablissement des ordonnances\n          - la comptabilite\nLes LGC communiquent avec l’exterieur du cabinet medical. \nPar exemple, ils permettent la teletransmission des feuilles de soins électroniques (FSE), mais egalement les echanges de resultats biologiques avec les laboratoires d’analyse medicale, ou des courriers avec l’hopital. \nDans un avenir proche, les LGC seront une source essentielle pour alimenter le dossier medical personnel (DMP) des patients.\n");
	getch();
	system("cls");
	menu_param();
}