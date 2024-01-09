/*
 * 1.c
 *
 *  Created on: 25 feb. 2022
 *      Author: teodo
 */

#include<stdio.h>
int main() {
	char nume1[20],nume2[20],prenume1[20],prenume2[20];
	int opt;
	printf("Introduceti numele si prenumele primului student:");
    fflush(stdout);
    scanf("%s%s",nume1,prenume1);
    printf("Introduceti numele si prenumele celui de-al doilea student:");
    fflush(stdout);
    scanf("%s%s",nume2,prenume2);
    printf("Daca doriti ordonarea alfabetica dupa nume, apasati 0.\n"
    		"Daca doriti ordonarea alfabetica dupa prenume,apasati 1.\n");
    printf("Introduceti 0 sau 1:");
    fflush(stdout);
    scanf("%d",&opt);
    if(opt==0)
    	{if(nume1[0]>nume2[0])
    	    printf("Numele studentilor in ordine alfabetica a numelor este:\n%s %s\n%s %s",nume2,prenume2,nume1,prenume1);
         else
            printf("Numele studentilor in ordine alfabetica a numelor este:\n%s %s\n%s %s",nume1,prenume1,nume2,prenume2);}
    else
    	{if(prenume1[0]>prenume2[0])
    	    printf("Numele studentilor in ordine alfabetica a prenumelor este:\n%s %s\n%s %s",nume2,prenume2,nume1,prenume1);
    	 else
    	    printf("Numele studentilor in ordine alfabetica a prenumelor este:\n%s %s\n%s %s",nume1,prenume1,nume2,prenume2);}
	return 0;
}
