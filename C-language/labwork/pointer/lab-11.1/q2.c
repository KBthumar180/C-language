#include<stdio.h>

void swap(int *a,int *b){
    int swap;
    swap=*a;
    *a=*b;
    *b=swap;
}

main(){
    int n1,n2;

    printf("Enter first number:- ");
    scanf("%d",&n1);

    printf("Enter second number:- ");
    scanf("%d", &n2);

    printf("original:- n1 = %d, n2 = %d\n",n1,n2);

    swap(&n1,&n2);

    printf("After swapping:- n1 = %d, n2 = %d\n",n1,n2);
}

