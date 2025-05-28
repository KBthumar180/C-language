#include <stdio.h>

 main(){
 	
    int n;
    int i;
	printf("Enter the number of elements in the array:- ");
    scanf("%d",&n);

    int arr[n]; 
    int *p=arr; 

    printf("Enter %d elements:-\n",n);
    for(i=0;i<n;i++){
    	printf("a[%d] :- ",i);
        scanf("%d",p+i);
    }

    printf("Squares of array elements:\n");
    for(i=n-1;i>=0;i--){
        int sq=(*(p+i))*(*(p+i));
        printf("%d ",sq);
    }

    printf("\n");
}

