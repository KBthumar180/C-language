#include<stdio.h>
main(){
	int no,digit=0;
	printf("Enter no:- ");
	scanf("%d",&no);
	
	
	while(no>0){
		no = no/10;
		digit++;
		
	}
	printf("the digits are:- %d",digit);
	
}
