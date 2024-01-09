/*
 * Numarul_Urmator.c
 *
 *  Created on: 9 dec. 2021
 *      Author: teodo
 */

#include<stdio.h>
int main(){
	int a;
	printf("Introduceti numarul:");
	fflush(stdout);
	scanf("%d",&a);
	printf("Numarul precedent este: %d.\n",a-1);
	printf("Numarul urmator este: %d.",a+1);
	return 0;}

