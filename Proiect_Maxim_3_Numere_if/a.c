/*Sa se scrie un program care va citi de la tastatura trei numere
 *  si va afisa valoarea maxima dintre cele trei numere.
 */

#include<stdio.h>
int main() {
	float a,b,c;
	printf("Introduceti cele trei numere:");
	fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>b)
		if(a>c)
			printf("Maximul este %.2f.",a);
		else
			printf("Maximul este %.2f.",c);
	else
		if(b>c)
			printf("Maximul este %.2f.",b);
		else
			printf("Maximul este %.2f.",c);
	return 0;

}
//ex 7 if
