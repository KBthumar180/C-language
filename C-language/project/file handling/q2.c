#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float chem_marks, maths_marks, phy_marks;
};

int main() {
    struct Student students[5]; 
    int i;

    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); 
        printf("Chemistry Marks (out of 100): ");
        scanf("%f", &students[i].chem_marks);
        printf("Mathematics Marks (out of 100): ");
        scanf("%f", &students[i].maths_marks);
        printf("Physics Marks (out of 100): ");
        scanf("%f", &students[i].phy_marks);
    }

    printf("\nMark Sheet:\n");
    printf("---------------------------------------------------------\n");
    printf("Roll No   Name              Chemistry  Maths  Physics  Percentage\n");
    printf("---------------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        float total_marks=students[i].chem_marks+students[i].maths_marks+students[i].phy_marks;
        float percentage=(total_marks/300)*100;

        printf("%-9d %-17s %-10.2f %-6.2f %-7.2f %.2f%%\n",
               students[i].roll_no,students[i].name,
               students[i].chem_marks,students[i].maths_marks,students[i].phy_marks,percentage);
    }

    printf("---------------------------------------------------------\n");
}

