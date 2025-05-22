#include<stdio.h>
main(){
	char str[100],ch;
	int i,len;
	int cap=0,small=0,digit=0,sp=0;
	
	printf("Enter your password:- ");
	gets(str);
	
	for(len=1;str[len]!='\0';len++){
		len++;
	}
	for(i=0;i<=str[i]!='\0';i++){
		ch=str[i];
		
		if(ch>='A' && ch<='Z'){
			cap=1;
		}
		if(ch>='a' && ch<='z'){
			small=1;
		}
		if(ch>='0' && ch<='9'){
			digit=1;
		}
		if(ch>=33 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96){
			sp=1;
		}
	}
	if(len<6){
		printf("Password must contain at least 6 characters");
	}else if (cap && small && digit && sp){
		printf("Your password is strong");
	}else{
		printf("Your password is a weak password\n");
		printf("Your password must contain one capital letter\n");
		printf("Your password must contain one small letter\n");
		printf("Your password must contain one digit\n");
		printf("Your password must contain one special character\n");
	}
}
