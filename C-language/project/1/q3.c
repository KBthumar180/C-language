#include<stdio.h>
main(){
	int f,s,x=180,a,n;
	printf("Input first angle:-");
	scanf("%d",&f);
	printf("Input second angle:-");
	scanf("%d",&s);
	a=f+s;
	n=x-a;
	
	printf("Third angle of triangle is:- %d",n);
}
