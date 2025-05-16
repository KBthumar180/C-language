
#include<stdio.h>
main(){
	int r,c,i,sum=0,j;
	float x;
	
	printf("enter the no. Row:- ");
	scanf("%d",&r);
	printf("enter the no. of Column:- ");
	scanf("%d",&c);
	
	int a[r][c];
	
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
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j){
				sum+=a[i][j];
			}
		}
	}
	printf("the sum of diagonal elements is:- %d",sum);
	
}
