#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "menu.h"



void veri(int *m,int *j,int *a)

{
do
     {
printf("\nmois: ");
scanf("%d",m);
}
while ((*m<1) ||(*m>12));

if (*m==1 || *m==3 || *m==5 || *m==7 || *m==8 || *m==10 || *m==12 )
{
do
 {
     printf("\njour: ");
    scanf("%d",j);
 }
    while ((*j<1)||(*j>31));
}
else if (*m==2)
{
    do
    {

    printf("\njour: ");
    scanf("%d",j);
    }
    while((*j<1)||(*j>29));

}
else{
    do
    {
        printf("\njour: ");
    scanf("%d",j);
    }
while((*j<1)||(*j>30));
}
do
{

    printf("\nannee: ");
scanf("%d",a);
}
while ((*a<1850)||(*a>2500));
}
