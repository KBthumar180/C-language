#include <stdio.h>

float area();  

int main(){
    float result;
    result = area();
    printf("Area of the circle is: %.2f\n", result);

    return 0;
}

float area() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    return 3.14 * r * r;
}

