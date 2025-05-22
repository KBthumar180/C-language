#include<stdio.h>
void num();

main(){
	num();
}

void num(){
	
	int n;
	
	printf("enter the number:- ");
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0){
		printf("The given no. is divisible by 3 and 5");
	}else{
		printf("The given no. is not divisible by 3 and 5");
	}
}

