#include "menu.h"
void rechnom()
{
    char recherch[50];
    char nom[50];
    Patient nv_patient;
     int i,x,trouve1, trouve2=0;
     FILE *fichier_patient;

     printf("\nSaisir le nom ");
     scanf("%s",&recherch);

    fichier_patient = fopen("patient.txt","a");
    /*do
    {
        fscanf(fichier_patient,"%s",&nv_patient.nom);
        fscanf(fichier_patient,"%s",&nv_patient.prenom);
        if (strcmp(nom,nv_patient.nom)==0&&strcmp(prenom,nv_patient.prenom)==0)
        {
            fscanf(fichier_patient,"%s/%s/%d/%d/%d/%ld\n",&nv_patient.nom,&nv_patient.prenom,&nv_patient.date_naissance.jour,&nv_patient.date_naissance.mois,&nv_patient.date_naissance.annee,&nv_patient.carte_identite);
             printf("          Nom: %s\n          Prenom: %s\n          Date de naissance: %d - %d - %d\n          Numero CIN:%ld\n ",nv_patient.nom,nv_patient.prenom,nv_patient.date_naissance.jour,nv_patient.date_naissance.mois,nv_patient.date_naissance.annee,nv_patient.carte_identite);
        }
    } while (fgetc(fichier_patient)!=EOF);*/

/*
    while (!EOF) // tant que la fin du fichier n'est pas atteint
     {
         if (nom) // si un numero de compte a ete saisi
         {

                trouve1=(strcmp(nom, nv_patient.nom));
                if (trouve1==0)
                {
                    if (prenom)
                    {
                        trouve2=(strcmp(prenom, nv_patient.prenom));
                    }
                }

         }
                    else printf("ERREUR : Le patient recherche n'esxite pas");
     } // fin du while*/
x=strlen(recherch);
while(fread(&nv_patient,sizeof(nv_patient),1,fichier_patient)==1)
	{
		for(i=0;i<=x;i++)
			nom[i]=nv_patient.nom[i];

		if(stricmp(nom,recherch)==0) { printf("          Nom: %s\n          Prenom: %s\n          Date de naissance: %d - %d - %d\n          Numero CIN:%ld\n ",nv_patient.nom,nv_patient.prenom,nv_patient.date_naissance.jour,nv_patient.date_naissance.mois,nv_patient.date_naissance.annee,nv_patient.carte_identite);}
	}
  /*  if (trouve1==0 && trouve2==0)
    {
         fscanf(fichier_patient,"%s/%s/%d/%d/%d/%ld\n",&nv_patient.nom,&nv_patient.prenom,&nv_patient.date_naissance.jour,&nv_patient.date_naissance.mois,&nv_patient.date_naissance.annee,&nv_patient.carte_identite);
    }
    printf("          Nom: %s\n          Prenom: %s\n          Date de naissance: %d - %d - %d\n          Numero CIN:%ld\n ",nv_patient.nom,nv_patient.prenom,nv_patient.date_naissance.jour,nv_patient.date_naissance.mois,nv_patient.date_naissance.annee,nv_patient.carte_identite);
    //system ("pause");*/
    fclose(fichier_patient);
}
