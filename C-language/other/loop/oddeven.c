#include<stdio.h>
main(){
	int i,n;
	printf("enter value of n:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			printf("%d",i);
		}
	}
}
