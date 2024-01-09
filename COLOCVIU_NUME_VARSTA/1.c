/*
 * 1.c
 *
 *  Created on: 19 ian. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main() {
	int an_curent,an;
	char nume[20];
	printf("Introduceti numele:");
	fflush(stdout);
	scanf("%s",nume);
	printf("Introduceti anul curent:");
	fflush(stdout);
	scanf("%d",&an_curent);
	printf("Introduceti anul nasterii:");
	fflush(stdout);
	scanf("%d",&an);
	printf("%s are %d ani.\n",nume,an_curent-an);
	if(an_curent-an<=18)
		printf("%s este minor si mai are %d ani pana va deveni major.",nume,18-an_curent+an);
	else
		printf("%s este major.",nume);


	return 0;
}

