#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number : ");
    scanf("%d",&c);

    if(a<b)
    {
        if(a<c) printf("The smallest number is : %d", a);
        else printf("The smallest number is : %d", c);

    }

    if(a>b)
    {
        if(c<b) printf("The smallest number is : %d", c);
        else printf("The smallest number is : %d", b);
    }
 

}
