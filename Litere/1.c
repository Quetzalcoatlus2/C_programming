#include <stdio.h>

int main()
{
    char a;
    char b;

    printf("Introduceti o litera:");
    fflush(stdout);
    scanf("%c", &a);

    if (a > 'a' && a < 'z') {
        for (b = a; b <= 'z'; b++) {
            printf("%c ", b);
            fflush(stdout);
        }

        printf("\n");

        for (b = 'z'; b >= a; b--) {
            printf("%c ", b);
            fflush(stdout);
        }
    }



    else if (a > 'A' && a < 'Z') {
        for (b = a; b <= 'Z'; b++) {
            printf("%c ", b);
            fflush(stdout);
        }

        printf("\n");

        for (b = 'Z'; b >= a; b--) {
            printf("%c ", b);
            fflush(stdout);
        }
    }

    else if (a=='a'){
          	 for (b = 'a'; b <= 'z'; b++) {
          	            printf("%c ", b);
          	            fflush(stdout);
          	        }
          	}

    else if (a=='A'){
      	 for (b = 'A'; b <= 'Z'; b++) {
      	            printf("%c ", b);
      	            fflush(stdout);
      	        }
      	}

    else if (a=='z'){

       	  for (b = 'z'; b >= 'a'; b--) {
       	            printf("%c ", b);
       	            fflush(stdout);
       	        }}

    else if (a=='Z'){

      	  for (b = 'Z'; b >= 'A'; b--) {
      	            printf("%c ", b);
      	            fflush(stdout);
      	        }}
    else {
        printf("Caracterul introdus nu este litera!\n");
    }

    return 0;
}
