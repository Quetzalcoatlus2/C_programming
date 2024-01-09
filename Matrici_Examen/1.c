/*
Considerând o matrice care contine pe fiecare linie notele obtinute de un student într-un semestru, sã se scrie un program care va citi
numãrul de semestre, numãrul de note/semestru si notele (nr de note/semestru*nr.semestre) si va determina si afisa urmãtoarele:
1.numãrul de note mai mici decât 5
2.media notelor pentru fiecare semestru si media finalã
3.numãrul semestrelor în care media a fost peste 7
 */
#include<stdio.h>
int main(){
	int v[3][3];
	int s = 0, validare,noteSub5,min,max,c1 = 0,c2 = 0,c3 = 0;
	int nLinii,nColoane;
	int i,j;
	for(validare = 0 ; validare == 0;)
	{
	printf("Introduceti numarul de linii si coloane:");
	fflush(stdout);
	scanf("%d%d", &nLinii, &nColoane);
	if(nLinii > 3 || nColoane > 3){
	printf("Depasire dimensiune!!!\n");
	validare = 0;
	}
	else
	validare = 1;
	}


	printf("Dimensiuni corecte!\n");


	for(i = 0; i< nLinii; i++)
	for(j = 0; j< nColoane; j++)
	{
	printf("linia[%d] coloana[%d]  ", i, j);
	fflush(stdout);
	scanf("%d", &v[i][j]);
	}



	for(i=0; i< nLinii; i++){
	if(i== 0)
	{
	printf("                ");
	for(j = 0; j < nColoane; j++)
	{
	printf("N%d   ", j+1);
	fflush(stdout);
	}
	printf("\n");
	fflush(stdout);
	}


	printf("Semestrul %d:  ", i+1);
	fflush(stdout);
	for(j = 0; j < nColoane; j++){
	printf("  %2d ", v[i][j]);
	fflush(stdout);
	}
	printf("\n");
	fflush(stdout);
	}
	for(i = 0; i < nLinii; i++)
	for(j = 0; j < nColoane; j++)
	{
	if(v[i][j] < 5)
	noteSub5 = v[i][j];
	}
	for(i = 0; i < nLinii ; i++)
	{
	min = v[i][0];
	for(j = 1; j < nColoane ; j++)
	if(min > v[i][j])
	min = v[i][j];
	printf("Valoarea minima de pe linia %d este %d\n", i + 1,min);
	}
	for(j = 0; j < nColoane ; j++)
	{
	min = v[0][j];
	for(i = 1; i < nLinii ; i++)
	if(min > v[i][j])
	min = v[i][j];
	printf("Valoarea minima de pe coloana %d este %d\n", j + 1,min);
	}
	for(i = 0; i < nLinii ; i++)
	{
	max = v[i][0];
	for(j = 1; j < nColoane ; j++)
	if(max < v[i][j])
	max = v[i][j];
	printf("Valoarea maxima de pe linia %d este %d\n", i + 1,max);
	}
	for(j = 0; j < nColoane ; j++)
	{
	min = v[0][j];
	for(i = 1; i < nLinii ; i++)
	if(max < v[i][j])
	max = v[i][j];
	printf("Valoarea minima de pe coloana %d este %d\n", j + 1,max);
	}
	for(i = 0; i < nLinii; i++)
	for(j = 0; j < nColoane; j++)
	{
	if(min > v[i][j])
	min = v[i][j];
	}
	printf("\nNumarul notelor mai mici decat 5 este %d.",noteSub5);
	printf("\nNumarul cel mai mic de pe linii si coloane este %d.",min);
	for(i = 0; i < nLinii; i++)
	for(j = 0; j < nColoane; j++)
	{
	if(max < v[i][j])
	max = v[i][j];
	}
	printf("\nNumarul cel mai mare de pe linii si coloane este %d.",max);
	fflush(stdout);
	for(i = 0; i < nLinii ; i++)
	{
	s = v[i][0];
	for(j = 1; j < nColoane ; j++)
	s += v[i][j];
	printf("\nSuma de pe linia %d este %d.",i + 1,s);
	}
	for(j = 0; j < nColoane ; j++)
	{
	s = v[0][j];
	for(i = 1; i < nLinii ; i++)
	s += v[i][j];
	printf("\nSuma de pe coloana %d este %d.", j + 1,s);
	}
	for(i = 0; i < nLinii ; i++)
	{
	s = v[i][0];
	for(j = 1; j < nColoane ; j++)
	s += v[i][j];
	c1++;
	printf("\nMedia de pe linia %d este %g.",i + 1,(float)s/c1);
	}
	for(j = 0; j < nColoane ; j++)
	{
	s = v[0][j];
	for(i = 1; i < nLinii ; i++)
	s += v[i][j];
	c2++;
	printf("\nMedia de pe coloana %d este %g.", j + 1,(float)s/c2);
	}
	printf("\nMedia finala este: %.2f\n", (float)s/(nLinii * nColoane));
	for(i = 0; i < nLinii ; i++)
	{
	s = v[i][0];
	for(j = 1; j < nColoane ; j++)
	if(v[i][j] > 7)
	s += v[i][j];
	c3++;
	}
	printf("\nNumarul de linii in care media este peste 7 este %g.",((float)s/c1)/c3);
	return 0;
}


