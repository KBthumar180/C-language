#include<stdio.h>
main(){
	int i,j,s;
	for(i=5;i>=1;i--){
		for(s=3;s>=5-i;s--){
			printf(" ");
		}
		for(j=i;j<=5;j++){
			printf("%d",j);
		}
		for(j=5-1;j>=i;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
