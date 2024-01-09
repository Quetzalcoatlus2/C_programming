/*
 * 1.c
 *
 *  Created on: 13 iun. 2022
 *      Author: bogdan
 */
#include<stdio.h>
int main() {
	int i;
	int n;
	int v[20];
	float f[20];
	float a;
	float b;
	float c;

	printf("n: ");
	fflush(stdout);
	scanf("%d", &n);

	printf("Introduceti elementele vectorului: ");
	fflush(stdout);
	for(i=0; i<n; i++)
	    scanf("%d", &v[i]);

	printf("Introduceti coeficientii a, b, c corespunzatori functiei axx+bx+c: ");
	fflush(stdout);
	scanf("%f%f%f", &a, &b, &c);

	for(i=0; i<n; i++)
		f[i]=a*v[i]*v[i] + b*v[i] +c;
	printf("Rezultatelor functiilor in ordine inversa sunt:");

	for(i=n-1; i>=0; i--)
		printf("\nf(%d) = %5.1f", v[i], f[i]);



	return 0;
}

