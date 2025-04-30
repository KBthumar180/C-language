#include<stdio.h>
main(){
	int i=1,sum=0;
	int n;
	printf("Enter no :- ");
	scanf("%d",&n);
	while(i<=n){
		printf("%d ",i);
		sum=sum + i;
		i++;
	}
	printf("sum :- %d",sum);

	
}
