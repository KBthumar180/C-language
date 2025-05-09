#include<stdio.h>
main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if (j == 1 || (i == 1 && j <= 5) || (i == 3 && j <=5 ) || (j == 5 && (i == 2 || i == 3))){
				printf("*");
			}else if (i==4 || i==5){
				printf(" ");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
