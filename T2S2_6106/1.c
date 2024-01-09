/*
 Sa se citeasca dintr-un fisier de tip text numarul n care reprezinta numarul de inregistrari
 salvate in fisier, iar apoi sa se salveze intr-un fisier de tip array struct.
 Datele vor descrie obiecte de tip hotel cu caracteristicile:
 nume_hotel, localitate, nr_camere, pret camera.
 programul va afisa in consola hotelul cu pretul de cazare cel mai mare
 si cate dintre hoteluri au cel putin 100 de camere.
 pentru nota maxima se va considera fisierul de date fara sa contina
 numarul de inregistrari pe prima linie.*/
#include<stdio.h>
int main(){
	struct hotel {
		char nume[20];
		char loc[20];
		int camere;
		int pret;
	};
	struct hotel t[20];
	int i ,n=0, c=0, max=0, scump=0;
	FILE *hotele;
	hotele=fopen("hotele.txt", "r");
	if(!hotele){
		printf("Eroare!");
		return 1;}
	while(!feof(hotele)){
		fscanf(hotele, "%s%s%d%d", t[n].nume,t[n].loc,&t[n].camere,&t[n].pret);
	n++;}

	fclose(hotele);

	for(i=0; i<n; i++){
		if(max<t[i].pret){
			max=t[i].pret;
	scump=i;}
	if(t[i].camere>100)
	c++;}

	printf("Cel mai scump hotel este %s si costa %d per noapte.\n",t[scump].nume, t[scump].pret);
	printf("Sunt %d hotele cu cel putin 100 de camere.",c);

	return 0;
}



