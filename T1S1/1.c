/*
 * 1.c
 *
 *  Created on: 9 mar. 2022
 *      Author: teodo
 */
#include<stdio.h>
int main() {
	int i;
	int n;
	int v[20];
	int c1=0;
	int c2=2;
	int c3=0;
	int suma=0;
	int r;
	int Vmax;
	int Vmin;
	int Max;
	int Min;
	printf("Dati n:");
	fflush(stdout);
	scanf("%d",&n);
	printf("\n");

	for(i=0; i<n; i++)
	{	printf("v[%d]=",i+1);
	fflush(stdout);
	scanf("%d",&v[i]);
	}

	printf("Numerele pare sunt: ");
	for(i=0; i<n; i++)
		{ if(v[i]%2==0){
			printf("%d ",v[i]);
		c1++;}
		}
	printf("\n");
	printf("Au fost introduse %d numere pare.",c1);

	for(i=0; i<n; i++)
			{ suma+=v[i];
			}
	printf("\n");
	printf("Suma numerelor introduse este %d.\n",suma);
	printf("Media numerelor introduse este %.2f.\n",(float)suma/n);
	printf("Numerele peste medie sunt:");
	for(i=0; i<n; i++)
		{	if(v[i]>(float)suma/n)
			printf("%d ",v[i]);
		}
	printf("\n");

	printf("\nIntroduceti Vmin:");
    fflush(stdout);
	scanf("%d",&Vmin);
		printf("\nIntroduceti Vmax:");
		fflush(stdout);
		scanf("%d",&Vmax);
		printf("Numerele strict mai mari decat %d si strict mai mici decat %d sunt: ",Vmin,Vmax);
		for(i=0; i<n; i++)
						{if(v[i]>Vmin&&v[i]<Vmax)
							printf("%d ",v[i]);}



		for(i=0; i<n; i++)
						{if(v[i]>Max)
							Max=v[i];}
		printf("\nMaximul este %d",Max);
		for(i=0; i<n; i++)
							{if(v[i]<Min)
								Min=v[i];}
			printf("\nMinimul este %d",Min);

			printf("\n");

	r=v[1]-v[0];
	for(i=2; i<n; i++)

					{	if(v[i]-v[i-1]==r)
						{c2++;}
					    else
						{c2=2;
					r=v[i]-v[i-1];}

							if(c2>c3)
					c3=c2;

					}

	printf("Numarul maxim de numere aflate in progresie aritmetica este %d.",c3);

	return 0; }
