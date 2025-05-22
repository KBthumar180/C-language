#include <stdio.h>
void ao();

int main(){
    ao();
}
void ao(){
    int n1,n2,r,choice;

    while(1){
        printf("\n--->Arithmetic Operations<---\n");
        printf("press 1. Add\n");
        printf("press 2. Subtract\n");
        printf("press 3. Multiply\n");
        printf("press 4. Divide\n");
        printf("press 5. Modulous\n");
        printf("press 0. Exit\n");
        
        printf("Enter your choice:- ");
        scanf("%d",&choice);

        if(choice==0){
            printf("Exiting the program\n");
            break; 
        }

        if(choice<0 || choice>5) {
            printf("Invalid choice Please enter a number between 0 and 5.\n");
            continue; 
        }

        printf("Enter first number:- ");
        scanf("%d",&n1);
		printf("Enter first number:- ");
        scanf("%d",&n2);
        
        switch(choice) {
            case 1:
                r=n1+n2;
                printf("Result: %d + %d = %d\n",n1,n2,r);
                break;

            case 2:
                r=n1-n2;
                printf("Result: %d - %d = %d\n",n1,n2,r);
                break;

            case 3:
                r=n1*n2;
                printf("Result: %d * %d = %d\n",n1,n2,r);
                break;

            case 4:
                if(n2!=0) {
                    r=n1/n2;
                    printf("Result: %d / %d = %d\n",n1,n2,r);
                } 
				else{
                    printf("Division by zero is not allowed\n");
                }
                break;

            case 5:
                if(n2!=0){
                    r=n1%n2;
                    printf("Result: %d % %d = %d\n",n1,n2,r);
                } 
				else{
                    printf("Modulo by zero is not allowed\n");
                }
                break;
        }
    }
}



