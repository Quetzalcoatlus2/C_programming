/*
Sa se citeasca dintr-un fisier de tip text numarul n care reprezinta numarul de inregistrari
salvate in fisier,apoi sa se citeasca toate inregistrarile care se vor pastra intr-o variabila
de tip array struct.
Datele vor descrie obiecte de tip hotel cu caracteristicile : nume_hotel,localitate,nr_camere,
pret_camera.
Programul va afisa in consola hotelul cu pretul de cazare cel mai mare si cate dintre hoteluri au
cel putin 100 de camere.
*pentru nota maxima se va considera fisierul de date fara sa contina numarul de inregistrari pe
prima linie.
 */
#include<stdio.h>

struct hotel{
	char nume_hotel[20];
	char localitate;
	int nr_camere;
	int pret_camera;

}a[50];

int main(){

	int n = 0,i,ax = 0,max = 0,vn = 0;

	FILE *date;

	date = fopen("date.txt","r");

	if(!date){
			printf("Eroare !");
			return 1;
			}

		while(!feof(date))
		{
		fscanf(date,"%s%s%d%d",a[n].nume_hotel,&a[n].localitate,&a[n].nr_camere,&a[n].pret_camera);
		n++;
		}
		for(i = 0; i < n; i++)
		{
		if(max < a[i].pret_camera)
		{
		max = a[i].pret_camera;
		ax = i;
		}
		if(a[i].nr_camere >= 100)
		vn++;
		}
		printf("Hotelul cu pretul de cazare cel mai mare este %s, cu pretul %d\n",a[ax].nume_hotel,a[ax].pret_camera);
		printf("%d Hoteluri cu cel putin 100 camere",vn);
		fclose(date);


	return 0;
}
