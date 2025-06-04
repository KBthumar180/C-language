#include<stdio.h>
// student avg and grade
main(){
	float s1,s2,s3,s4,s5;
	float avg,x;
	
	printf("Enter marks of subject-1:-");
	scanf("%f",&s1);
	printf("Enter marks of subject-2:-");
	scanf("%f",&s2);
	printf("Enter marks of subject-3:-");
	scanf("%f",&s3);
	printf("Enter marks of subject-4:-");
	scanf("%f",&s4);
	printf("Enter marks of subject-5:-");
	scanf("%f",&s5);	
	
	avg=(s1+s2+s3+s4+s5)/5;
	
	printf("The average marks is %.2f:-",avg);
	
	printf("\n");
	
	if(avg<=100 && avg>90){
		printf("Your grade is A1");
	}
	else if(avg<=90 && avg>80){
		printf("Your grade is A2");
	}
	else if(avg<=80 && avg>70){
		printf("Your grade is B1");
	}
	else if(avg<=70 && avg>60){
		printf("Your grade is B2");
	}
	else if(avg<=60 && avg>50){
		printf("Your grade is C1");
	}
	else if(avg<=50 && avg>40){
		printf("Your grade is C1");
	}
	else if(avg<=40 && avg>32){
		printf("Your grade is E");
	}
	else{
		printf("Your are Fail, Better luck next time");
	}
}
