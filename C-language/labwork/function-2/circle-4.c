#include <stdio.h>

float area(float radius);

int main(){
    float r,result;

    printf("Enter the radius of the circle:- ");
    scanf("%f", &r);
    result=area(r);
    printf("Area of the circle is: %.2f\n",result);
    return 0;
}

float area(float radius) {
    return 3.14159*radius*radius;
}

