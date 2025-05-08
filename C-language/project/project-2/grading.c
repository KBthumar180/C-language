#include<stdio.h>
main(){
	int m;
	printf("Enter your marks:- ");
	scanf("%d",&m);
	
	if(m>90){
		printf("your grade is A1, Excellent work");
	}
	else if(m>80 && m<=90){
		printf("your garde is A2, Nice work");
	}
	else if(m>70 && m<=80){
		printf("your garde is B1, good work");
	}
	else if(m>60 && m<=70){
		printf("your garde is B2, average work");
	}
	else if(m>50 && m<=60){
		printf("your garde is C1, Can do better");
	}
	else if(m>40 && m<=50){
		printf("your garde is C2, much improvement needed");
	}
	else{
		printf("your garde is F,fail");			
	}
}
