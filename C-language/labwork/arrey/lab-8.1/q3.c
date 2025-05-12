#include<stdio.h>
main(){
	int n,i,x;
	printf("enter the no. of arrey element:- ");
	scanf("%d",&n);
	
	int a1[n];
	int a2[n];
	
	for(i=0;i<n;i++){
		printf("a1[%d] :- ",i);
		scanf("%d",&a1[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("a2[%d] :- ",i);
		scanf("%d",&a2[i]);
	}
	for(i=0;i<n;i++){
		x= a1[i]+a2[i];
		printf("arrey C is :- %d\n",x);
	}

}
