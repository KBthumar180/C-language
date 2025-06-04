#include<stdio.h>
void odd();
//odd elements of id arrey using UDF

main(){
	odd();
}


void odd(){

int n,i;

    printf("Enter the no. of arrey elements:-");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++){
        printf("a[%d]:-",i);
        scanf("%d",&a[i]);
    }

    printf("odd elements are:- ");
    	for(i=0;i<n;i++){
    		if(a[i]%2!=0){
    			printf("%d",a[i]);
			}
		}
printf("\n");
}




