/*
Sa se citeasca toate numerele naturale prin introducerea lui m si n si cu (m > n)
sa se afiseze valorile:
a.Consola : 2.5 30.7
Valorile de multiplu de 2.5 sunt : 2.5 5.0 7.5 10.0 12.5 15.0 17.5 20.0 22.5 25.0 27.5 30.0 pe o singura linie
b.Sa se afiseze pe 4 linii in ordine descrescatoare folosind un vector de dimensiune 50
Consola: 30.0 27.5 25.0 22.5
         20.0 17.5 15.0 12.5
         10.0 7.5 5.0 2.5
 */
#include<stdio.h>
int main(){
	float m,n,i;
	float M;
	int v[50],aux,a,b;
printf("Introduceti m si n:");
fflush(stdout);
scanf("%f%f",&m,&n);
printf("Valorile de multiplicitate ale lui %.1f sunt: ",m);
for(i = 1; i * m < n; i++)
{
M = m * i;
printf("%.1f ",M);
}







	return 0;
}


