#include<stdio.h>
int main(){
    float a,b,c,d,e;
    printf("Enter Maths marks : ");
    scanf("%f", &a);
    printf("Enter Physics marks : ");
    scanf("%f", &b);
    printf("Enter Chemistry marks : ");
    scanf("%f", &c);
    printf("Enter English marks : ");
    scanf("%f", &d);
    printf("Enter Painting marks : ");
    scanf("%f", &e);
    float x=(a+b+c+d+e)/5.0;
    printf("Your percentage is : %f",x);

    return 0;
}