/*Sa se scrie un program care va citi trei numere intregi care reprezinta
 * notele unui student si va afisa media celor trei note, iar in cazul în
 * care media este sub 5 va afisa un mesaj de atentionare (ex: ”Medie sub 5!”).
 */

#include<stdio.h>
int main() {
	int a,b,c;
	float media;
	printf("Introduceti cele trei note:");
	fflush(stdout);
	scanf("%d %d %d",&a,&b,&c);
	media=(float)(a+b+c)/3;
	printf("Media celor trei note este %f.\n",media);
	if(media<5)
		printf("Medie sub 5!");
	return 0;
}
//ex 8 if
