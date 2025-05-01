#include<stdio.h>
main(){
	int no1=0,no2=1,i,no3,n;
	printf("Enter no : -");
	scanf("%d",&n);
	printf("%d %d",no1,no2);
	for(i=2;i<n;i++){
		no3 = no1 + no2;
		printf(" %d ",no3);
		no1 = no2;
		no2 = no3;
	}
}
