/*
Consider�nd o matrice care contine pe fiecare linie notele obtinute de un student �ntr-un semestru,
s� se scrie un program care va citi num�rul de semestre, num�rul de note/semestru si notele (
nr de note/semestru*nr.semestre) si va determina si afisa urm�toarele:
1.num�rul de note mai mici dec�t 5
2.media notelor pentru fiecare semestru si media final�
3.num�rul semestrelor �n care media a fost peste 7
 */
#include<stdio.h>
#include<stdlib.h>

int main() {
	int v[10][10];
	int sem;
	int note;
	int i;
	int j;
	int sub5=0;
    int peste7=0;
	float media;
	float mediaF=0;
	printf("Introduceti numarul de semestre:");
	fflush(stdout);
	scanf("%d", &sem);
	printf("Introduceti numarul de note per semestru:");
	fflush(stdout);
	scanf("%d", &note);


	for(i=0; i<sem; i++)
		for(j=0; j<note; j++){
			printf("Nota %d din semestrul %d este: ", j+1, i+1);
            fflush(stdout);
            scanf("%d", &v[i][j]);}

	for(i=0; i<sem; i++)
			for(j=0; j<note; j++){
				if(v[i][j]<5)
					sub5++;
			}

	printf("\nStudentul are %d note sub 5.", sub5);

	for(i=0; i<sem; i++){

		    media=0;
			for(j=0; j<note; j++){
				media+=v[i][j];
			    if(media/note>7)
			          peste7++;}

			mediaF+=media;

			printf("\nMedia pe semestrul %d este: %.2f", i+1, media/note);}

	printf("\nMedia finala este: %.2f", mediaF/(note*sem));


	printf("\nNumarul de semestre in care media este peste 7 este %d.", peste7);







	return 0;
}


