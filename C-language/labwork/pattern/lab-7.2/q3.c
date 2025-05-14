#include<stdio.h>
main(){
    int i, j, s;

    for(i = 5; i >= 1; i--){      
        for(s = 1; s <= i - 1; s++){
            printf("  ");
        }
        for(j = 1; j <= 6 - i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
