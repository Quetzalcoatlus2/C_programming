#include<stdio.h>
int main() {
	char magazin1[20],magazin2[20];
	float pret1,pret2,curs1,curs2, suma;
	printf("Primul magazin, valoarea si cursul de schimb:");
	fflush(stdout);
	scanf("%s %f %f",magazin1,&pret1,&curs1);
	printf("Al doilea magazin, valoarea si cursul de schimb:");
		fflush(stdout);
		scanf("%s %f %f",magazin2,&pret2,&curs2);
	pret1=pret1*curs1;
	pret2=pret2*curs2;
	suma=pret1+pret2;
	printf("%s %f RON\n",magazin1,pret1);
	printf("%s %f RON\n",magazin2,pret2);
	printf("Suma totala:%f\n",suma);
	return 0;


}


