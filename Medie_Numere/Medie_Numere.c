/*
 * Medie_Numere.c
 *
 *  Created on: 9 dec. 2021
 *      Author: teodo
 */

#include<stdio.h>
int main()
{
	int a,b,c;
float media;
printf ("Introduceti prima nota: ");
fflush(stdout);
scanf ("%d",&a);
printf ("Introduceti prima nota: ");
fflush(stdout);
scanf ("%d",&b);
printf ("Introduceti a treia nota: ");
fflush(stdout);
scanf ("%d",&c);
media = (a+b+c) / 3;
printf ("Media celor 3 note este: %.2f", media);
fflush(stdout);
media=1/(1/a+1/b+1/c);
printf("Media armonica a celor 3 note este %.2f.",media);
return 0;}
