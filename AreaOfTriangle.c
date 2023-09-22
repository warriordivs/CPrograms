// Write a program to accept height and base of triangle
// And calculate Area of triangle - Area = (height*base)/2 
#include<stdio.h>
int main(){
    double height, base, area;
    printf("Enter the valuesof height and base: ");
    scanf("%lf %lf", &height, &base);
    area = (height * base) / 2.0;
    printf("Area of the triangle: %.2lf", area);
    return 0;
}