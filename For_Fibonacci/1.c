/*                  1. Instructiunea repetitiva cu contorizare
 *
 * Realizati un program ce va afisa primele n numere Fibonnacci si Tribonacci si medile numerelor.
 */
#include<stdio.h>
int main() {
	int i,n,e,ea=1,eaa=1,eaaa=2,suma;
	float media;
	printf("Introduceti numarul primelor numere din sirul Fibonacci/Tribonacci:");
	fflush(stdout);
	scanf("%d",&n);

	printf("1 1 ");
	for(i=0; i<n-2; i++)
		{e=ea+eaa;
		printf("%d ",e);
	suma+=e;
	eaa=ea;
	ea=e;}
	media=(float)suma/n;
	printf("\nMedia celor %d numere Fibonacci este %.2f.\n",n,media);

	eaaa=0;
	eaa=0;
	ea=1;
	printf("0 0 1 ");
	for(i=0; i<n-3; i++)
			{e=ea+eaa+eaaa;
			printf("%d ",e);
		suma+=e;
		eaaa=eaa;
		eaa=ea;
		ea=e;}
	media=(float)suma/n;
		printf("\nMedia celor %d numere Tribonacci este %.2f.",n,media);
	return 0;
}

