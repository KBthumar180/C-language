#include<stdio.h>
main(){
	int no,f_dig,l_dig,sum;
	printf("Enter no:- ");
	scanf("%d",&no);
	
	f_dig = no%10;
	
	
	while(no>10){
		no = no/10;		
	}
	l_dig=no;
	
	printf("sum:- %d",f_dig+l_dig);
	
}
