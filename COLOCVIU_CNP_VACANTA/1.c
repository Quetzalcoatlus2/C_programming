/*
 * 1.c
 *
 *  Created on: 13 ian. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main(){
	char CNP[15]="5020130375480";
	int luna, zi;
	luna=(CNP[3]-'0')*10+CNP[4]-'0';
	zi=(CNP[5]-'0')*10+CNP[6]-'0';
	printf("%d/%d\n",zi,luna);
	if(luna==7 || luna==8)
		printf("Nascut in vacanta de vara.");
	else
			if(luna==6&&zi>14)
				printf("Nascut in vacanta de vara.");
			else
				if(luna==9&&zi<15)
					printf("Nascut in vacanta de vara.");
				else
					printf("Nu este nascut in vacanta de vara.");




	return 0;
}

