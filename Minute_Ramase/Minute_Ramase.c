/*
 * Minute_Ramase.c
 *
 *  Created on: 9 dec. 2021
 *      Author: teodo
 */

#include <stdio.h>
int main ()
{
int oraCurenta,minutulCurent,oreRamase,minuteRamaseDinOra,MinuteRamaseDinZi;
printf("Introduceti ora:");
fflush(stdout);
scanf("%d",&oraCurenta);
printf("Introduceti minutele:");
fflush(stdout);
scanf("%d",&minutulCurent);
oreRamase=23-oraCurenta;
oreRamase=oreRamase*60;
minuteRamaseDinOra=60-minutulCurent;
MinuteRamaseDinZi=oreRamase+minuteRamaseDinOra;
printf("Numarul de minute ramase din zi este:%d",MinuteRamaseDinZi);
return 0;
}
