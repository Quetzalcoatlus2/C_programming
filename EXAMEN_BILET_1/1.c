/*
 * 1.c
 *
 *  Created on: 9 iun. 2022
 *      Author: bogdan
 */
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, i, a, flag;
	int *v;
	printf("Introduceti numarul de elemente ale vectorului:");
	fflush(stdout);
	scanf("%d", &n);
	v=(int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++){
		printf("v[%d]=", i);
		fflush(stdout);
		scanf("%d", &v[i]);
	}

	for(i=0; i<n; i++)
		if(v[i]%2==0)
			printf("\n%d - par", v[i]);
		else
			printf("\n%d - impar", v[i]);


	printf("\n\nOrdonare descrescatoare:\n");

	do{
		flag=1;
		for(i=0; i<n-1; i++){
			if(v[i+1]>v[i]){
				a=v[i+1];
				v[i+1]=v[i];
				v[i]=a;
				flag=0;
				}
			}



	}while(flag==0);

		for(i=0; i<n; i++)
			printf("\nv[%d]=%d", i, v[i]);



		printf("\n\nOrdonare crescatoare:\n");

		do{
			flag=1;
			for(i=0; i<n-1; i++){
				if(v[i+1]<v[i]){
					a=v[i+1];
					v[i+1]=v[i];
					v[i]=a;
					flag=0;
					}
				}



		}while(flag==0);

			for(i=0; i<n; i++)
				printf("\nv[%d]=%d", i, v[i]);


	return 0;
}

