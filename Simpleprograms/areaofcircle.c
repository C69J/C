#include<stdio.h>
int main(){
   float r;
   printf("Enter radius : ");
   scanf("%f", &r);
   float a=3.14159*r*r;
   printf("Area of circle is : %f",a);
   return 0;
}