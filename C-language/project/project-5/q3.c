#include<stdio.h>
main(){
	int r,c,i,j;
	printf("enter number of rows:- ");
	scanf("%d",&r);
	printf("enter number of columns:- ");
	scanf("%d",&c);
	
	int a[r][c]; 
	
	printf("Enter the elements of the array:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("a[%d][%d]:-",i,j);
            scanf("%d",&a[i][j]);
        }
    }
	printf("original matrix \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
    	printf("transpose matrix \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
    
  
  
        }
    
    
    
   
   

