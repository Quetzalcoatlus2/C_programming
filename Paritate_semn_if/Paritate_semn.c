/*
 * Paritate_semn.c
 *
 *  Created on: 21 dec. 2021
 *      Author: teodo
 */

#include<stdio.h>
int main() {
	int a;
	printf("Dati numarul:");
	fflush(stdout);
	scanf("%d",&a);
	if(a%2!=0)
		printf("Numarul este impar.\n");
	else
		printf("Numarul este par.\n");
	if(a<0)
		printf("Numarul este negativ.");
	else
		printf("Numarul este pozitiv.");

	return 0;
}
