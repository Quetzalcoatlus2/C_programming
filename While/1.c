/*           7. Alte tipuri de structuri repetitive (while do-while)
 *
 * Realizati un program in care dupa fiecare numar introdus de la tastatura
 * se afiseaza cate numere au fost introduse, suma si media actuala,
 * cate sunt pozitive si negative si care este distanta maxima dintre numere.
 * Pentru a iesi din bucla, introduceti 99.
 */

#include<stdio.h>
int main() {
	int n=0,c, max=0, min=0, neg=0, poz=0, suma=0;
	do{
		printf("v[%d]=",n);
		fflush(stdout);
		scanf("%d", &c);
		if(c==99)
			{printf("Ati introdus 99 pentru a iesi din bucla!\n");
		     return 1;}
		else
			if(c>=0){
			     poz++;
		         n++;
			     suma+=c;}
		else
			{neg++;
		     n++;
			 suma+=c;}

		if(max<c)
		max=c;
		if(min>c || min==0)
		min=c;
		printf("Au foat introduse %d numere pana acum.\n",n);
		printf("Suma actuala a numerelor este %d.\n", suma);
		printf("Media actuala a numerelor este %.2f.\n", (float)suma/n);
		printf("Au fost introduse %d numere pozitive si %d numere negative.\n", poz, neg);
		printf("Distanta maxima dintre numerele vectorului este %d.\n", max-min);

	}while(c!=99);
	return 0;
}
