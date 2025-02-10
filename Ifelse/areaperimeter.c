#include<stdio.h>
int main(){
    float l,b;
    printf("Enter length of rectangle : ");
    scanf("%f",&l);
    printf("Enter breadth of rectangle : ");
    scanf("%f",&b);
    float a,p;
    a=l*b; p=2*(l+b);
    if (a>p)printf("Area is greater than perimeter.");
    else if(a==p)printf("Area is equal to perimeter.");
    else printf("Perimeter is greater than area.");

    return 0;
}