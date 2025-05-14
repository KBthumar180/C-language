#include<stdio.h>
main ()
{
    int i, j, s;
    for(i = 1; i <= 5; i++) {
        for(s = 0; s < i; s++) {
            printf("  ");
        } 
        for(j = 0; j <= 5 - i; j++) {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }
}
