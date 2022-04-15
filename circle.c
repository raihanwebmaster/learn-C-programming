/**
Write a program to find the perimeter and area of a circle.
The program will ask the user for a radius and Then print the perimeter and area

Sample Interaction:
    Enter radius: 1
    Perimeter = 6.28
    Area = 3.14

    Perimeter = 2 * pi* r
    Area = pi * r ^ 2
**/
#include<stdio.h>
int main(){
    printf("Enter radius: ");
    double radius;
    scanf("%lf", &radius);

    const double PI = 3.1416;


    double perimeter = 2 * PI * radius;
    printf("perimeter = %.2lf\n", perimeter);

    double area = PI * radius * radius;
    printf("area = %.2lf\n", area);

    return 0;
}
