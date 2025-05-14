#include<stdio.h>
main(){
    int i, j, s;
    for(i = 0; i < 5; i++){       
        for(s = 0; s < i; s++){
            printf("  ");
        }
        for(j = 5; j > i; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
}
