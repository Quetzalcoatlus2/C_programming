/*Scrieti un program C care va citi temperatura în grade Celsius
si va transforma marimea în grade Fahrenheit.*/

#include<stdio.h>
int main() {
	float c,f;
	printf("Introduceti temperatura in grade Celsius:");
	fflush(stdout);
	scanf("%f",&c);
	f=(9*c)/5+32;
	printf("Temperatura in grade Fahrenheit este %.1f.",f);
	return 0;
}

//ex9 lab 5/6
