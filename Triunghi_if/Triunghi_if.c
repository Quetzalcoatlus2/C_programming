/*
 * Triunghi_if.c
 *
 *  Created on: 21 dec. 2021
 *      Author: teodo
 */

#include<stdio.h>
int main() {
	float a,b,c,max;
	printf("Dati numerele:");
	fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>b)
		if(a>c)
			max=a;
		else
			max=c;
	else
		if(b>c)
			max=b;
		else
			max=c;

	if(max<(a+b+c)/2)
		printf("Cele trei numere pot reprezenta lungimile laturilor unui triunghi.");
	else
	    printf("Cele trei numere nu pot reprezenta lungimile laturilor unui triunghi.");


	return 0;
}
