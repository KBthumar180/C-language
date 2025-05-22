#include<stdio.h>
void cube();

main(){
	cube();
}

void cube(){
	
	int n,r;
	
	printf("enter the number:- ");
	scanf("%d",&n);
	
	r = n*n*n;
	
	printf("the cube of %d is:- %d ",n,r);
}

