#include<stdio.h>
main(){
	int r,c,i,x,j,sum=0;
	printf("enter the no. of row:- ");
	scanf("%d",&r);
	printf("enter the no. of column:- ");
	scanf("%d",&c);
	
	int a1[r][c];
	int a2[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("a1[%d][%d]:-",i,j);
		scanf("%d",&a1[i][j]);
	
	   }		
	}

	printf("\n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("a2[%d][%d]:-",i,j);
		scanf("%d",&a2[i][j]);
		
	   }		
	}
	
	printf("\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		x= a1[i][j]+a2[i][j];
		printf("arrey C is :- %d\n",x);		
	}
}


}
