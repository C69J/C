#include<stdio.h>
int main(){
    float v,s,t;
    printf("Enter  distance in km : ");
    scanf("%f", &s);
    printf("Enter time in hours : ");
    scanf("%f", &t);
    v=s/t;
    printf("The speed is : %f km/hr", v);

    return 0;
}