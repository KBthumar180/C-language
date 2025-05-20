#include<stdio.h>
main(){
	char str[100];
	int i=0;
	
	printf("Enter the string:- ");
	scanf("%s",&str);
	
	while(str[i]!='\0'){
        if (str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]-('A'-'a'); 
            
        }
        i++;
    
    }
    printf("lowercase string:- %s",str);
}
