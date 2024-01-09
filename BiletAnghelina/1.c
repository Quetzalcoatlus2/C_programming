/*
 * 1.c
 *
 *  Created on: 14 feb. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main()
{
	float a,b,c;
	int media;
	printf("Dati numerele:");
	fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	media=(a+b+c)/3;
	printf("Media celor trei numere este %d.\n",media);
	if(media%2!=0)
		printf("Media este impara!");
	else
		printf("Media este para!");



	return 0;
}

