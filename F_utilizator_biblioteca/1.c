/*
 * 1.c
 *
 *  Created on: 22 apr. 2022
 *      Author: teodo
 */

#include<stdio.h>
#include"binLib.h"


int main(){

	char sirRezultat[9];
	char * p_sirRezultat = NULL;

	printf("%s\n", decTo8Bin(58, sirRezultat)); // 00001011
	printf("%s\n", decToNBin(580, 32, p_sirRezultat)); // 00001011
	free(p_sirRezultat);




	return 0;
}


