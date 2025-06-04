#include<stdio.h>
//even elements using pointer
main(){
	
	int n;
	
	printf("Enter the no. of arrey elements:- ");
	scanf("%d",&n);
	
	int a[n],i;
	int *p=a;
	
	for(i=0;i<n;i++){
		printf("a[%d]:-",i);
		scanf("%d",p+i);
	}
	
	printf("Even elements are:-");
	for(i=0;i<n;i++){
		if(*(p+i)%2==0){
			printf("%d",*(p+i));
		}
	}
	printf("\n");
}
