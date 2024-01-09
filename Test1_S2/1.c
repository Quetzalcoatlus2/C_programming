/*
 * 1.c
 *
 *  Created on: 16 mar. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main() {
	int i;
	int n;
	int v[50];
	int suma=0;
	int c=0;
	printf("Dati dimensiunea vectorului:");
	fflush(stdout);
	scanf("%d", &n);
	for(i =0; i<n; i++){
		printf("v{%d]=",i);
		fflush(stdout);
		scanf("%d", &v[i]);
	}
	for(i =0; i<n; i++){
			if(v[i]%2!=0){
				suma+=v[i];
				c++;
			}

		}
	if(c==0)
		printf("Nu exista elemente impare.\n");
	else
	printf("Suma elementelor impare este %d.\n",suma);

	for(i =0; i<n; i++){
		if(v[i]<0)
			printf("%d este negativ si se afla pe pozitia %d.\n",v[i],i);
	}



	return 0;
}

