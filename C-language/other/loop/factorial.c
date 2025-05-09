#include<stdio.h>
main(){
	int i=1,a,n;
	printf("enter value of n:-");
	scanf("%d",&n);
	 
	 for(i=1;i<=n;i++){
	 	a=a*i;
	 }
	 printf("the factorial is:- %d",a);
}
