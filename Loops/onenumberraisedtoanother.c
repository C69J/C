#include<stdio.h>
int main(){
    int b,p;
    printf("Enter the base : ");
    scanf("%d", &b);
    printf("Enter the exponent : ");
    scanf("%d", &p);
    int power=1;
    for(int i=1; i<=p; i++)power=power*b;
    printf("The resultant is : %d", power);
    return 0;
}