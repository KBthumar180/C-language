#include<stdio.h>
main(){
	int ch;
	printf("****WELCOME TO OUR RESTAURENT****\n");
	printf("press 1 to order pizza\n");
	printf("press 2 to exit\n");
	printf("input your choice:-");
	scanf("%d",&ch);
	
	switch(ch){
	
	case 1:
		printf("press 1 to order pizza\n");
		printf("press 2 to order burger\n");
		printf("press 3 to order sandwich\n");
		scanf("%d",&ch);
	switch (ch){
		case 1:
			printf("you ordered a pizza");
		break;
		
		case 2:
			printf("you ordered a burger");
		break;
		
		case 3:
			printf("you ordered a sandwich");
		break;
	}
    break;
	case 2:
			printf("Thank you for visiting us");
	break;
	default :
	printf("invalide choice");
	break;
	
	}

}
