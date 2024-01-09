/*
 * ASCII_Conversie.c
 *
 *  Created on: 9 dec. 2021
 *      Author: teodo
 */

#include<stdio.h>
int main () {
	char c;
	int a;
	printf("Introduceti caracterul:");
	fflush(stdout);
	scanf("%c",&c);
	a=c;
	printf("%c = %d", c, a);
	return 0;
}
