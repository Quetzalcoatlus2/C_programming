/*
 * Medie_Armonica.c
 *
 *  Created on: 9 dec. 2021
 *      Author: teodo
 */

#include<stdio.h>
int main () {
    int n1, n2;
  float medie;
  printf("Introduceti prima nota:");
scanf("%d",&n1);
printf("Introduceti a doua nota:");
scanf("%d",&n2);
  // completati cu functia de citire n1 si n2
  medie = (n1 + n2) / 2;
  printf("Media este %f.",medie);
  // completati cu functia de afisare a mediei
   medie=1/(1/n1+1/n2);
   printf("Media armonica este %f.",medie);
   // adaugati codul pentru calculul mediei armonice (n1,n2,n3)
     return 0;

    }
