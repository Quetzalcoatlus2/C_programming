/*Scrieti un program care va citi de la tastatura marimea bazei si a
 * inaltimii unui triunghi si va afisa valoarea ariei.
 */


#include <stdio.h>
int main() {
	float b,h,aria;
	printf("Introduceti marimea uneia dintre laturile triunghiului:");
	fflush(stdout);
	scanf("%f",&b);
	printf("Introduceti marimea inaltimii corespunzatoare laturii introduse:");
	fflush(stdout);
	scanf("%f",&h);
	aria=(b*h)/2;
	printf("Aria triunghiului este %f.",aria);
	return 0;

}

//ex 13 lab 5/6
