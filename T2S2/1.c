/*
Sa se citeasca dintr-un fisier de tip text numarul n care reprezinta numarul de inregistrati salvate
in fisier, iar apoi sa se citeasca toate inregistrarile care se vor pastra intr-o variabila de tip
array struct.
Datele vor descrie produse de tip autoturisme cu caracteristicile: producator, model,
an fabricatie, consum mediu.
Programul va afisa in consola autoturismul cu consumul cel mai mare si cate din autoturisme au fost
produse in anul 2020.
 */
#include<stdio.h>
int main() {
struct masini {
	char prod[20];
	char model[20];
	int an;
	int consum;};

struct masini a[4];

int n=0;
int i;
int max=0;
int c=0;
int cMax;

/*
printf("Introduceti numarul de autoturisme:");
fflush(stdout);
scanf("%d", &n);
for(i=0; i<n; i++){
	printf("Introduceti numele producatorului, modelului si "
			"valorile anului de fabricatie si consumului mediu pentru masina numarul %d:", i+1);
fflush(stdout);
scanf("%s%s%d%d",a[i].prod, a[i].model, &a[i].an, &a[i].consum );}

FILE *autoturism;
autoturism=fopen("auto.txt","r");
if(!autoturism){
	printf("Eroare creare fisier!");
	return 0;}


for(i=0; i<n; i++)
	fprintf(autoturism,"%s      %s      %d      %d\n",a[i].prod, a[i].model, a[i].an, a[i].consum);

fclose(autoturism);*/
FILE *autoturism;
autoturism=fopen("autoturism.txt", "r");
while(!feof(autoturism)){
	fscanf(autoturism,"%s%s%d%d",a[n].prod, a[n].model, &a[n].an, &a[n].consum);
	n++;}
fclose(autoturism);

for(i=0; i<n; i++){
	if(max<a[i].consum)
		{max=a[i].consum;
cMax=i;}
if(a[i].an==2020)
	c+=1;}

printf("Cel mai mare consum mediu a fost inregistrat de masina produsa de %s, modelul %s, "
		"consumul fiind de %d.\n",a[cMax].prod, a[cMax].model, a[cMax].consum);

printf("Numarul de masini produse in 2020 este %d.",c);




	return 0;
}

