/*
 * 1.c
 *
 *  Created on: 21 dec. 2021
 *      Author: teodo
 */


#include<stdio.h>
int main() {
	int a,b,c,d,e;
	printf("Dati numarul:");
    fflush(stdout);
	scanf("%d",&a);
    b=a/10;
    c=a/100;
    d=a/1000;
    e=a/10000;
	if(b!=0)
		if(c!=0)
			if(d!=0)
				if(e!=0)
					printf("Numarul introdus are prea multe cifre!");
				else
					printf("Numarul are patru cifre.");
			else
				printf("Numarul are trei cifre.");
		else
			printf("Numarul are doua cifre.");
	else
		printf("Numarul are o cifra.");

	return 0;
}
