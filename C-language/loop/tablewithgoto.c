#include<stdio.h>
main(){
	int i=1,n;
	printf("enter value of n:- ");
	scanf("%d",&n);
	st:
			printf("%d * %d = %d\n",i,n,i*n);
		    i++;

	if(i<=10){
		goto st;
	
		
	}


}
