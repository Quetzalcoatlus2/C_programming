/*

Scrieti un program care citeste dintr-un fisier de date un vector de numere si afiseaz
valoarea maxim , stiind c  pe prima linie a fisierului se afl  num rul total de elemente.
*/
#include<stdio.h>
int main(){
	FILE *Test;
	int max=0,n,i,v[50];
	printf("Introduceti numarul de elemente ale vectorului:");
	fflush(stdout);
	scanf("%d",&n);
	for(i = 0; i < n ; i++){
	printf("Vectorul [%d] = ",i);
	fflush(stdout);
	scanf("%d",&v[i]);}
	Test = fopen("Text.txt", "w");
	if(Test){
	fprintf(Test,"Numarul elementelor este:  %d \n", n);
	for(i = 0; i < n; i++){
	fprintf(Test,"%d\n", v[i]);
	}}

	else
	printf("Eroare la creare fisier!");
	fclose(Test);

	Test = fopen("Text.txt", "r");


		for(i = 1; i <= n; i++)
		fscanf(Test,"%d", &v[i]);


		fclose(Test);

		for(i = 0; i < n; i++){
			if(max<v[i])
				max=v[i];
		}
		printf("Valoarea maxima este: %d", max);



	return 0;
}


