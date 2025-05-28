#include<stdio.h>


struct student {
    int id;
    char name[50];
    int age;
    char course[50];
    char city[50];
    int std;
    char school[50];
};

 main() {
    struct student s[50]; 
    int i;

    for(i=0;i<3;i++) {
        printf("\nEnter student %d details:\n", i+1);
        printf("Enter student ID: ");
        scanf("%d", &s[i].id);
        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter student age: ");
        scanf("%d", &s[i].age);
        printf("Enter student course: ");
        scanf("%s", s[i].course);
        printf("Enter student city: ");
        scanf("%s", s[i].city);
        printf("Enter student std: ");
        scanf("%d", &s[i].std);
	    printf("Enter student school: ");
        scanf("%s", s[i].school);
    }

    printf("\n--- Student Details ---\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Course: %s\n", s[i].course);
        printf("City: %s\n", s[i].city);
        printf("Std: %d\n", s[i].std);
        printf("School: %s\n", s[i].school);
    }

  
}


	


