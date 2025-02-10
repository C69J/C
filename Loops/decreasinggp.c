#include<stdio.h>
int main(){
    float a, r, n;
    printf("Enter first term : ");
    scanf("%f",&a);
    printf("Enter common ratio : ");
    scanf("%f",&r);
    printf("Enter nth term : ");
    scanf("%f",&n);

    for (int i=1; i<=n; i++)
    {
        printf("%f\n",a);
        a=a*r;
    }
    
    return 0;
}