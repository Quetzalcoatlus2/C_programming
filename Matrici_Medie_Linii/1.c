/*                                               4. Matrici
 *
 * Realizati un program care va citi o matrice de la
 * tastaturã si apoi va afisa media pe fiecare linie.*/

#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j, lin, col, v[10][10], u[10]={0};
	printf("Introduceti numarul de linii:");
	fflush(stdout);
	scanf("%d", &lin);
	printf("Introduceti numarul de coloane:");
	fflush(stdout);
	scanf("%d", &col);
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			printf("v[%d][%d]=", i+1, j+1);
			fflush(stdout);
			scanf("%d", &v[i][j]);
		}}
	for(i=0; i<lin; i++){{
		for(j=0; j<col; j++)
			u[i]+=v[i][j];}

	printf("Media notelor de pe linia %d este %.2f.\n", i+1, (float)u[i]/col);}

	return 0;
}

