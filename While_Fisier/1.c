/*

 */

#include<stdio.h>
int main() {
	int n=0,c, max=0, min=0, neg=0, poz=0, suma=0, d;
	FILE *numere;
	numere=fopen("date.txt", "r");
	do{
		fscanf(numere, "%d", &c);
		if(c==0)
			{printf("Ati introdus 0!\n");
		     n++;}
		else
			if(c>0){
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
		printf("Distanta maxima dintre numerele vectorului este %d.\n\n", max-min);
		printf("Introduceti orice caracter pentru a continua:");
		fflush(stdout);
		scanf("%d", &d);

	}while(c!=0);
	return 0;
}


