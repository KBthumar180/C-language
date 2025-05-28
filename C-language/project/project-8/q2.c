#include <stdio.h>
void cube();


 int main(){
 cube();
 return 0;
 }
 
 void cube(){
 	
    int n,i;
    
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
    for(i=0;i<n;i++){
        int cube=(*(p+i))*(*(p+i))*(*(p+i));
        printf("%d ",cube);
    }

    printf("\n");
}

