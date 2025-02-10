#include<stdio.h>
int main(){
    float a,b;
    printf("Enter first number : ");
    scanf("%f", &a);
    printf("Enter second number : ");
    scanf("%f",  &b);
    float c=(a+b)/2;
    printf("The average is : %f", c);
    return 0;
}