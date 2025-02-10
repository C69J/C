#include<stdio.h>
int main(){
    float a;
    printf("Enter the number : ");
    scanf("%f",&a);
    int b=a;
    float c=a-b;
    printf("The fractional part of the numner is : %f",c);
    return 0;
}