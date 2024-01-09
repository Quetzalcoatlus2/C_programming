/*
Sa se citeasca dintr-un fisier de tip text numarul n care reprezinta numarul de
inregistrari salvate in fisier, iar apoi sa se citeasca toate inregistrarile care se vor pastra
intr-o variabila de tip array struct.
Datele vor descrie produse de tip angajat cu caracteristicile: nume, an_nastere, an_angajare,
salariuBrut(in EURO).
Programul va afisa in consola angajatul cu vechimea cea mai mica(an_angajare maxim) si cati
angajati au venitul Brut peste 1000EURO.
*pentru nota maxima se va considera fisierul de date fara sa contina numarul de inregistrari
*pentru pe prima linie
5
IordacheVasile 1975 2001 850
ManeaCezar 1985 2002 1700
CocosCiprian 1970 1998 1400
ViziruAntoniu 1978 2000 1800
LucaManole 1982 2003 1555
 */


#include<stdio.h>

struct angajat{
	char nume[20];
	int an_nastere;
	int an_angajare;
	int salariuBrut;

}a[50];

int main(){

	int i,min = 0, ax = 0, vn = 0, n = 0;

	FILE *date;

	date = fopen("date.txt", "r");

	if(!date){
		printf("Eroare !");
		return 1;
		}
	while(!feof(date))
	{
	fscanf(date,"%s%d%d%d",a[n].nume,&a[n].an_nastere,&a[n].an_angajare,&a[n].salariuBrut);
	n++;
	}
	for(i = 0; i < n; i++)
	{
	if(min < a[i].an_angajare)
	{
	min = a[i].an_angajare;
	ax = i;
	}
	if(a[i].salariuBrut > 1000)
	vn++;
	}
	printf("Angajatul cu vechimea cea mai mica este %s, anul de angajare fiind %d\n",a[ax].nume,a[ax].an_angajare);
	printf("Numarul angajatilor cu venitul brut de peste 1000 EURO este de %d",vn);
	fclose(date);

return 0;
}

