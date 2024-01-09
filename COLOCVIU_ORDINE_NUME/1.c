/*
 * 1.c
 *
 *  Created on: 18 ian. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main() {
	char nume1[20],nume2[20];
	printf("Introduceti cele doua nume:");
	fflush(stdout);
	scanf("%s %s",nume1,nume2);
	if(nume1[0]>96)
		nume1[0]-=32;
	if(nume2[0]>96)
			nume2[0]-=32;
	if(nume1[0]!=nume2[0])
	  if(nume1[0]>nume2[0])
		printf("Numele in ordine alfabetica sunt %s %s.",nume2,nume1);
	  else
		printf("Numele in ordine alfabetica sunt %s %s.",nume1,nume2);
	else
		if(nume1[1]>nume2[1])
				printf("Numele in ordine alfabetica sunt %s %s.",nume2,nume1);
			else
				printf("Numele in ordine alfabetica sunt %s %s.",nume1,nume2);

	return 0;
}

