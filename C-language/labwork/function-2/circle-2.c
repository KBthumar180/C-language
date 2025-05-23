#include<stdio.h>
void area(float rad);

main(){
	float r;
	
	printf("Input the radius:- ");
	scanf("%f",&r);
	
	area(r);
	return 0;
}

void area(float rad){
	float area,pi=3.14;
	area=pi*rad*rad;
	printf("the area of circle is :- %.2f",area);
}
