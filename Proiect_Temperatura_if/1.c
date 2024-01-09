/*Sa se scrie algoritmul si programul care va permite citirea unei valori de
 * temperatura de la tastatura si va afisa starea de agregare a apei corespunzatoare
 * temperaturii respective. (sub 0 grade apa este sub forma de gheata, intre 0 si 100
 * de grade apa este sub forma lichida, iar peste 100 de grade este sub forma de vapori).
 */

#include<stdio.h>
int main() {
	float a;
	printf("Introduceti valoarea temperaturii apei in grade Celsius:");
	fflush(stdout);
	scanf("%f",&a);
	if(a>100)
		printf("Apa se gaseste sub forma de vapori.");
		else
			if("a<0")
				printf("Apa se gaseste sub forma de gheata.");
			else
				printf("Apa se gaseste sub forma lichida.");
	return 0;
}

//ex 6 if
