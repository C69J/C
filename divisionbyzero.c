#include<stdio.h>
int main(){
   float a,b;
    printf("Enter the first number : ");
    scanf("%f",&a);
    printf("Enter the second number : ");
    scanf("%f",&b);
    float z=a/b;
    printf("The division of two numbers is : %.2f",z);
    return 0;
}