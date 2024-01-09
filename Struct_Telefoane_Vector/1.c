/*
 * 1.c
 *
 *  Created on: 2 apr. 2022
 *      Author: teodo
 */

#include<stdio.h>

#include<string.h>
int main() {
	int n;
	int i;
	int scump;
	int usor;
	int x;
	int y;
	struct telefon {
		float pret;
		float greutate;
		float diagonala;
		char producator[20];
		char model[20];
	};
	struct telefon t[20];
	printf("Introduceti numarul de telefoane:");
	fflush(stdout);
	scanf("%d",&n);


	for(i=0; i<n; i++){



	printf("Introduceti numele producatorului si al modelului telefonului %d:",i+1);
	fflush(stdout);
	scanf("%s %s",t[i].producator,t[i].model);
	printf("\n");

	printf("Introduceti pretul (in lei), greutatea (in grame) si diagonala display-ului (in inch) a telefonului numarul %d:",i+1);
	fflush(stdout);
	scanf("%f %f %f",&t[i].pret,&t[i].greutate,&t[i].diagonala);
	printf("\n");






		printf("Telefonul numarul %d este produs de %s, modelul %s. Acesta costa %.2f lei, are %.2f grame si are diagonala de %.2f inch.\n",
				i+1,t[i].producator,t[i].model,t[i].pret,t[i].greutate,t[i].diagonala);

	}


	for(i=0; i<n; i++){
		if(t[i].pret>scump)
			{scump=t[i].pret;
		x=i;}

	if(t[i].greutate<usor)
		{usor=t[i].greutate;
	y=i;}
	}
	if(x!=y)
		{printf("Cel mai scump telefon este produs de %s, modelul %s. Acesta costa %.2f lei.",
								t[x].producator,t[x].model,t[x].greutate);


				printf("Cel mai usor telefon este produs de %s, modelul %s. Acesta are %.2f grame.",
						t[y].producator,t[y].model,t[y].greutate);}

	else
		printf("Cel mai scump si mai usor telefon este produs de %s, modelul %s. Acesta costa %.2f lei si are %.2f grame.",
								t[x].producator,t[x].model,t[x].pret,t[x].greutate);




	return 0;
}


