/*
 * Modulo_if.c
 *
 *  Created on: 21 dec. 2021
 *      Author: teodo
 */

#include<stdio.h>
int main() {

	int a,b,max;
	printf("Dati numerele:");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	if(b>a)
		{max=b;
	    b=a;
	    a=max;}
	if(a%b!=0)
		printf("Numerele nu sunt divizibile.");
	else
		printf("Numerele sunt divizibile.");
	return 0;
}
