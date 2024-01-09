/*
 * Numar_Biti_Variabile.c
 *
 *  Created on: 9 dec. 2021
 *      Author: teodo
 */
#include<stdio.h>
int main() {
int signedChar;
int signedShortInt;
int signedInt;
int signedFloat;
signedChar = sizeof(char);
signedShortInt = sizeof(short int);
signedInt = sizeof(int);
signedFloat = sizeof(float);
printf("%d %d %d %d",signedChar,signedShortInt,signedInt,signedFloat);
return 0;
}
