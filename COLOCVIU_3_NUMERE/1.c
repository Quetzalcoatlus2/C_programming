/*
 * 1.c
 *
 *  Created on: 20 ian. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main() {
	int a,b,c,contor=0,max,min;
	printf("Introduceti cele trei numere:");
	fflush(stdout);
	scanf("%d %d %d",&a,&b,&c);
	if(a>5)
		contor+=1;
	if(b>5)
		contor+=1;
	if(c>5)
		contor+=1;
	printf("Numarul de numere peste 5 este %d.\n",contor);
	contor=0;
	if(a%2==0)
		contor+=1;
    if(b%2==0)
		contor+=1;
	if(c%2==0)
		contor+=1;
	printf("Numarul de numere pare este %d.\n",contor);
	contor=0;
	if(a<0)
		contor+=1;
	if(b<0)
		contor+=1;
	if(c<0)
		contor+=1;
	printf("Numarul de numere negative este %d.\n",contor);
	if(a>b)
		if(a>c)
			max=a;
		else
			max=c;
	else
		if(b>c)
			max=b;
		else
			max=a;
	printf("Maximul este %d.\n",max);
	if(a<b)
		if(a<c)
			min=a;
		else
			min=b;
	else
		if(b<c)
			min=b;
		else
			min=a;
	printf("Minimul este %d.\n",min);
	printf("Media celor mai mari doua numere este %.2f.\n",(float)(a+b+c-min)/2);
	printf("Suma celor mai mari doua numere este %d.\n",a+b+c-min);
	printf("Produsul celor mai mari doua numere este %d.",a*b*c/min);
	return 0;
}

