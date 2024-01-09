/*
 * 1.c
 *
 * B Bucuresti
 * BV Brasov
 * VS Vaslui
 * CJ Cluj
 */
#include<stdio.h>
int main(){
	char numar[10];
	printf("Dati numarul de inmatriculare:");
	fflush(stdout);
    scanf("%s",numar);
    if(numar[0]=='V'&&numar[1]=='S')
    	printf("Judetul este Vaslui.");
    if(numar[0]=='C'&&numar[1]=='J')
       	printf("Judetul este Cluj.");
    if(numar[0]=='B'){
    	if(numar[1]=='V')
    		printf("Judetul este Brasov.");
    	else

        	printf("Judetul este Bucuresti.");}



	return 0;
}

