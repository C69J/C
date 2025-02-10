#include<stdio.h>
#include<math.h>

int main(){
    float n;
    printf("Enter the number : ");
    scanf("%f", &n);
    float root=sqrt(n);
    printf("The square root is : %f\n", root);
    float a,b;
    printf("Enter base : ");
    scanf("%f", &a);
    printf("Enter exponent : ");
    scanf("%f", &b);

    float power=pow(a,b);
    printf("The resultant of %f raised to %f is : %f",a,b, power);

    return 0;
}