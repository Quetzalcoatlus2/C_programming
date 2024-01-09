/*Scrieti un program care va citi de la tastatura un numar
 * intreg si va afisa în consola predecesorul si succesorul.
 */

#include<stdio.h>
int main(){
	int a;
	printf("Introduceti numarul:");
	fflush(stdout);
	scanf("%d",&a);
	printf("Predecesorul este: %d.\n",a-1);
	printf("Succesorul este: %d.",a+1);
	return 0;}

