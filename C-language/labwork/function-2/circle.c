#include<stdio.h>
void area();

main(){
area();	
}

void area(){
	
	float pi=3.14;
	float r,area;
	
	printf("Input the radius:- ");
	scanf("%f",&r);
	
	area = pi*r*r;
	
	printf("The area of circle is :- %.2f",area);
}
