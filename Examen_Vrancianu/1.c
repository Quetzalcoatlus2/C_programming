/*
 * 1.c
 *
 *  Created on: 12 iun. 2022
 *      Author: bogdan
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char nume[3][30];
    int i;
    int j;
    char aux[30];

    for (i = 0; i < 3; i++) {
        printf("nume[%d] = ", i);
        fflush(stdout);
        scanf("%s", nume[i]);
    }

    printf("Nume initiale:\n");

    for (i = 0; i < 3; i++) {
        printf("nume[%d] = %s\n", i, nume[i]);
    }

    for (i = 0; i < 3; i++)
        if (!(nume[i][0] >= 'A' && nume[i][0] <= 'Z'))
            nume[i][0] = nume[i][0] - ('a' - 'A');

    printf("Nume prelucrate in faza primara:\n");

    for (i = 0; i < 3; i++) {
        printf("nume[%d] = %s\n", i, nume[i]);
    }

    for (i = 0; i < 3; i++)
        for (j = 1; j < strlen(nume[i]); j++)
            if (!(nume[i][j] >= 'a' && nume[i][j] <= 'z'))
                nume[i][j] = nume[i][j] + ('a' - 'A');

    printf("Nume prelucrate in faza secundara:\n");

    for (i = 0; i < 3; i++) {
        printf("nume[%d] = %s\n", i, nume[i]);
    }

    for (i = 0; i < 2; i++)
        for (j = i + 1; j < 3; j++)
            if (strcmp(nume[i], nume[j]) > 0) {
                strcpy(aux, nume[i]);
                strcpy(nume[i], nume[j]);
                strcpy(nume[j], aux);
            }

    printf("Numele sortate in ordine crescatoare:\n");

    for (i = 0; i < 3; i++) {
        printf("nume[%d] = %s\n", i, nume[i]);
    }

    return 0;
}

