/*Scrieti un program C care va citi lungimea si latimea unui
dreptunghi si va afisa aria si perimetrul dreptunghiului.*/

#include<stdio.h>
int main() {
	float a,b,per,aria;
	printf("Introduceti valorile celor doua laturi:");
	fflush(stdout);
	scanf("%f %f",&a,&b);
	per=2*(a+b);
	aria=a*b;
	printf("Perimetrul dreptunghiului este %.2f.\n",per);
	printf("Aria dreptunghiului este %.2f",aria);
	return 0;
}

//ex 6 lab 5/6
