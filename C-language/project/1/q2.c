#include<stdio.h>
main(){
	float hra,da,ta,bs,gs,h,d,t;
	
	printf("Input base salary:-");
	scanf("%f",&bs);
	printf("Input HRA:-");
	scanf("%f",&hra);
	printf("Input DA:-");
	scanf("%f",&da);
	printf("Input TA:-");
	scanf("%f",&ta);
	
	h=(hra/100)*bs;	
	d=(da/100)*bs;
	t=(ta/100)*bs;
	
	gs=bs+h+d+t;
	
	printf("the gross salary is %.2f",gs);
}
