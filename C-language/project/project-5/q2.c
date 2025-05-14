#include<stdio.h>
main(){
	int r,c,i,j;
	printf("enter number of rows:- ");
	scanf("%d",&r);
	printf("enter number of columns:- ");
	scanf("%d",&c);
	
	int a[r][c];
	int m=a[r][c];
	
	printf("Enter the elements of the array:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Element[%d][%d]:-",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]>m){
            m=a[i][j];	
			}
        }
    }
    printf("the largest element is:- %d",m);
   
}
