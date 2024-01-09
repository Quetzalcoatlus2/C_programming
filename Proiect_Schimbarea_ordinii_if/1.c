/*Sa se citeasca douã numere de la tastatura si sa se
 * afiseze numerele respective in ordine descrescatoare.
 */

#include<stdio.h>
int main() {
	float a,b;
	printf("Introduceti numerele:");
	fflush(stdout);
	scanf("%f %f",&a,&b);
	if(a>b)
		printf("Numerele in ordine descrescatoare sunt %.2f %.2f.",a,b);
	else
		printf("Numerele in ordine descrescatoare sunt %.2f %.2f.",b,a);
	return 0;

}

//ex 9 if
