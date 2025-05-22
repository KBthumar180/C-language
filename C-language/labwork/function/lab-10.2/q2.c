#include <stdio.h>
void length();

int main(){
    length();
}

void length() {
    char str[100];
    int l=0;

    printf("Enter a string:- ");
    gets(str);  

 
    while(str[l]!='\0'){
        l++;
    }
    printf("The length of the string is: %d\n",l);
}



