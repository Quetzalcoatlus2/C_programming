/*
Realizati un program in C care indeplineste urmatoarele cerinte:
-citeste dintr-un fisier de tip text numarul n care reprezinta numarul de inregistrari salvate in fisier,
-apoi sa se citeasca toate inregistrarile care se vor pastra intr-o variabila de tip array struct.
-programul va afisa in consola produsul cel mai ieftin si numarul total de produse din stoc a caror pret este mai mic de 10.
Datele din fisier vor descrie produse alimentare cu caracteristicile: produs, producator, pret, gramaj, stoc.

*pentru nota maxima se va considera fisierul de date fara sa contina numarul de inregistrari pe prima linie

produse.txt

5
Unt Napolact 10.56 350 120
Lapte Zuzu 14.23 1 203
Zahar Margaritar 8.97 1 50
Sare Salrom 5.32 1 130
Ulei Unisol 9.67 1 420
 */
#include<stdio.h>
int main(){
	struct produse{
		char produs[20];
		char prod[20];
		float pret;
		int gramaj;
		int stoc;
	} p[20];

	int i, n=0, c=0, stoc=0;
	float ieftin;

	FILE *produse;
	produse=fopen("produse.txt", "r");
	if(!produse){
		printf("Eroare!");
		return 0;
	}

	while(!feof(produse)){
		fscanf(produse, "%s%s%f%d%d\n", p[n].produs, p[n].prod, &p[n].pret, &p[n].gramaj, &p[n].stoc);
		n++;
	}

	fclose(produse);
ieftin=p[0].pret+1;
	for(i=0; i<n; i++){
		if(ieftin>p[i].pret)
			{ieftin=p[i].pret;
		c++;}

		if(p[i].pret<10)
			stoc+=p[i].stoc;
	}

	printf("Cel mai ieftin produs este %s %s si costa %.2f.\n",p[c].produs, p[c].prod, p[c].pret);
	printf("Numarul de produse din stoc cu pret sub 10 este %d.",stoc);

	return 0;
}


