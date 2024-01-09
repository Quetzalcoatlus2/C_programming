/*
 * Inversul_Numarului.c
 *
 *  Created on: 9 dec. 2021
 *      Author: teodo
 */

#include <stdio.h>
int main() {
int a, u, z, s ;
printf("Introduceti numarul:");
fflush(stdout);
scanf("%d",&a);
u=a%10;
a=a-u;
a=a/10;
z=a%10;
a=a-z;
s=a/10;

s=a/10;
printf("Cifra sutelor este %d.\n",s);
printf("Cifra zecilor este %d.\n",z);
printf("Cifra unitatilor este %d.\n",u);

u=u*100;
z=z*10;
a=u+z+s;
printf("Inversul numarului este: %d.",a);
return 0;}
