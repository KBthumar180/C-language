 #include<stdio.h>
main(){
	int a,b,c,d;
	
	printf("enter value of a:-");
	scanf("%d",&a);
	printf("enter value of b:-");
	scanf("%d",&b);
	printf("enter value of c:-");
	scanf("%d",&c);
	printf("enter value of d:-");
	scanf("%d",&d);
	
	if(a>b && a>c && a>d){
		printf("a is max");
	}else if(b>a && b>c && b>d){
		printf("b is max");
	}else if(c>a && c>b && c>d){
		printf("c is max");
	}else if(d>a && d>b && d>c){
		printf("d is max");
	}else{
		printf("all are equal");
	}
	
} 
