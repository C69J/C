#include<stdio.h>
int main(){
    float p, r, t;
    printf("Enter principal amount : ");
    scanf("%f",&p);
    printf("Enter rate of interest : ");
    scanf("%f",&r);
    printf("Enter time in years : ");
    scanf("%f",&t);
    float si=(p*r*t)/100.0;
    printf("Your simple interest is : %f",si);
    return 0;
}