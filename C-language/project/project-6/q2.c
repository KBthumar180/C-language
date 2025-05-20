#include <stdio.h>
#include <string.h>

int p(char str[]){
    int start = 0;
    int end=strlen(str)-1;

    while(start<end) {
        if(str[start]!=str[end]){    
        }
        start++;
        end--;
    }
}

void cf(char str[]) {
    int freq[256] = {0};
    int i;  

    for (i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;  
    }

    printf("Character frequencies:\n");
    for(i=0;i<256;i++){
        if(freq[i]>0) {
        	printf("%c=%d\n",i,freq[i]);
        }
    }
}

main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);  
    if (p(str)){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }
    cf(str);
}

