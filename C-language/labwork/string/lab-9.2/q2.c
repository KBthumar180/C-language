#include <stdio.h>
#include <string.h>

int main() {
    const char correctEmail[] = "kt@gmail.com";
    const char correctPassword[] = "123";

    char email[100];
    char password[100];


    printf("Enter email: ");
    gets(email);  


    printf("Enter password: ");
    gets(password);  

    
    if(strcmp(email,correctEmail)==0 && strcmp(password,correctPassword)==0){
        printf("Login successful!\n");
    }else{
        printf("Invalid email or password. Login failed.\n");
    }

}

