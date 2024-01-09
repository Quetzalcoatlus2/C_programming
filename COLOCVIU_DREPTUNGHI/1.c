/*
 * 1.c
 *
 *  Created on: 20 ian. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main() {
	int lung,lat;
	printf("Dati lungimea [cm]: ");
	fflush(stdout);
	scanf("%d",&lung);
	printf("Dati latimea [cm]: ");
	fflush(stdout);
	scanf("%d",&lat);
	printf("Aria este %d [cm2].\n",lung*lat);
	if(lung==lat)
	printf("Patrat!");

	return 0;
}

