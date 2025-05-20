#include <stdio.h>
#include <string.h>

int p(char str[]) {
    int start=0;
    int end=strlen(str)-1;

    while(start<end) {
        if(str[start]!=str[end]){
            return 0;
        }
        start++;
        end--;
    }
   
}
int main(){
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); 

    if(p(str)) {
        printf("The string is a palindrome.\n");
    }else{
        printf("The string is NOT a palindrome.\n");
    }
   
}

