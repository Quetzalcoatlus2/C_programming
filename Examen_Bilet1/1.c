/*
 * 1.c
 *
 *  Created on: 12 iun. 2022
 *      Author: bogdan
 */
#include<stdio.h>
int main(){

	int v[50], i,j, optiune1=0, optiune2=0,n,aux=0;

	printf("Introduceti numarul de elemente:");
	fflush(stdout);
	scanf("%d" , &n);

	printf("Introduceti numerele:\n");
	fflush(stdout);
	for(i=0;i<n;i++){
		printf("v[%d]=" , i);
		fflush(stdout);
		scanf("%d" , &v[i]);
	}

	printf("Introduceti 0 daca doriti ordonarea crescatoare si 1 pt descrescatoare:\n");
	fflush(stdout);
	scanf("%d" , &optiune1);

	printf("Introduceti 0 pt nr pare si 1 pt nr impare:\n");
	fflush(stdout);
	scanf("%d" , &optiune2);


	if(optiune1==0 && optiune2==0){
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(v[i]<v[j]){
					aux=v[j];
					v[j]=v[i];
					v[i]=aux;
				}
		printf("Ordinea crescatoare a elementelor pare este:\n");
		for(i=0;i<n;i++){
			if(v[i]%2==0)
				printf("v[%d]=%d\n" , i , v[i]);
		}


	}
	if(optiune1==0 && optiune2==1){
		for(i=0;i<n;i++)
					for(j=0;j<n;j++)
						if(v[i]<v[j]){
							aux=v[j];
							v[j]=v[i];
							v[i]=aux;
						}
				printf("Ordinea crescatoare a elementelor impare este:\n");
				for(i=0;i<n;i++){
					if(v[i]%2!=0)
						printf("v[%d]=%d\n" , i , v[i]);
				}
	}
	if(optiune1==1 && optiune2==0){
		for(i=0;i<n;i++)
					for(j=0;j<n;j++)
						if(v[i]>v[j]){
							aux=v[j];
							v[j]=v[i];
							v[i]=aux;
						}
				printf("Ordinea descrescatoare a elementelor pare este:\n");
				for(i=0;i<n;i++){
					if(v[i]%2==0)
						printf("v[%d]=%d\n" , i , v[i]);
				}
	}
	if(optiune1==1 && optiune2==1){
		for(i=0;i<n;i++)
					for(j=0;j<n;j++)
						if(v[i]>v[j]){
							aux=v[j];
							v[j]=v[i];
							v[i]=aux;
						}
				printf("Ordinea descrescatoare a elementelor impare este:\n");
				for(i=0;i<n;i++){
					if(v[i]%2!=0)
						printf("v[%d]=%d\n" , i , v[i]);
				}


	}


return 0;
}

