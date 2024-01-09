/*
 * 1.c
 *
 *  Created on: 25 feb. 2022
 *      Author: teodo
 */
#include<stdio.h>

int main()
{double n;
    int i = 3, count, c;

    printf("Introduceti numarul de numere prime dorit:  ");
    fflush(stdout);
    scanf("%lf", &n);

    if(n >= 1)
    {
        printf("Primele %f numere prime sunt :  ", n);
        printf("2 ");
    }

    // iteration for n prime numbers
    // i is the number to be checked in each iteration starting from 3
    for(count = 2; count <= n; i++)
    {
        // iteration to check c is prime or not
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i)  // c is prime
        {
            printf("%d ", i);
            count++;    // increment the count of prime numbers
        }

    }

    return 0;
}

