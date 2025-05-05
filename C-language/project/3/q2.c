#include<stdio.h>
main(){
	int n,no=0,i=1;
	printf("enter the no. :-");
	scanf("%d",&n);
	
	if(n>9){
		while(i<=9){
			no =n/10;
			n++;
			printf("the sum is %d",no);
			break;
		}
	}

	
	

}
