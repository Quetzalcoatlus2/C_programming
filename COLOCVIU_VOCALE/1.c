/*
 * 1.c
 *
 *  Created on: 13 ian. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main ()
{
    char s[]="Gelu";

    if(s[0]>='A'&& s[0]<='Z')
    	s[0]+=32;

    if(s[0]=='a' || s[0]=='e' ||s[0]=='i' ||s[0]=='o' ||s[0]=='u')
    	printf(" s[0] este vocala ");
		else
			printf(" s[0] este consoana ");
    if(s[1]=='a' || s[1]=='e' ||s[1]=='i' ||s[1]=='o' ||s[1]=='u')
        	printf(" s[1] este vocala ");
    		else
    			printf(" s[1] este consoana ");


    printf("\n");

    if((s[0]>='A' && s[0]<='Z' ) || (s[0]>='a'&& s[0]<='z'))
    	printf("este litera");
    else
    	printf("nu este litera");
    return 0;}


