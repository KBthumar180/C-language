#include<stdio.h>
main(){
	int n,i,sum=0;
	float x=0;
	
	printf("enter the no. of arrey element:- ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("a[%d] :- ",i);
		scanf("%d",&a[i]);
		sum +=a[i];
		x=(float)sum/n;
	}
	printf("the average is :- %.2f",x);
}
	
	
