/*
 Considerãm un fisier de date care contine CNP-urile unor studenti. Sã se afiseze media vârstei studentilor.
 Sã se scrie si programul pentru verificarea/validarea CNP-urilor (https://ro.wikipedia.org/wiki/Cod_numeric_personal )

 Calcularea componentei C se face folosind constanta "279146358279", dupã cum urmeazã:

fiecare cifrã din primele 12 cifre ale C.N.P. este înmultitã cu corespondentul sãu din constantã
rezultate sunt însumate si totalul se împarte la 11
dacã restul împãrtirii este mai mic de 10, acela reprezintã valoarea componentei C
dacã restul împãrtirii este 10, valoarea componentei C este 1
 */
#include<stdio.h>
#include<stdlib.h>
int main(){
	char CNP[20][14];
	char cst[13]="279146358279";
	int n;
	int i;
	int j;
	int suma1=0;
	int suma2=0;
	FILE *cnp;
	cnp=fopen("cnp.txt","w");
	if(!cnp)
	{
    	printf("Eroare la creare fisier!");
    	return 1;
    	}
	printf("Introduceti numarul de CNP-uri pe care doriti sa le introduceti:");
	fflush(stdout);
	scanf("%d",&n);






	for(j=0; j<n; j++)
		{printf("Introduceti CNP-ul pentru studentul numarul %d:",j+1);
	fflush(stdout);
		scanf("%s",CNP[j]);
		fprintf(cnp,"%s\n", CNP[j]);}
fclose(cnp);


cnp=fopen( "cnp.txt","r");
	while(	fscanf(cnp, "%s", CNP[j])!=EOF)
	printf("%s\n", CNP[j]);
	fclose(cnp);

	for(j=0; j<n; j++)
		if(CNP[j][0]=='1' || CNP[j][0]=='2')
			suma1+=122-(CNP[j][1]-'0')*10-(CNP[j][2]-'0');
		else
			suma1+=22-(CNP[j][1]-'0')*10-(CNP[j][2]-'0');
	printf("Varsta medie a studentilor este %.2f.\n", (float)suma1/n);





	for(j=0; j<n; j++){
	for(i=0; i<12; i++){
		suma2+=(CNP[j][i]-'0')*(cst[i]-'0');
	if(suma2%11<10)
		CNP[j][12]=(suma2%11+'0');
	else
		CNP[j][12]='1';}
	printf("CNP-ul validat este : %s.\n",CNP[j]);
	suma2=0;}
	return 0;
}

