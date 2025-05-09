#include<stdio.h>
main(){
	int i,j,s;
	for(i=1;i<=5;i++){
		for(s=4;s>=1;s--){
			printf("	");
			
		}
		for(j=1;j<=5;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}
