#include<stdio.h>
int main(){
    int a,b;
    printf("Enter dividend : ");
    scanf("%d",&a);
    printf("Enter divisor : ");
    scanf("%d",&b);
    int r=a%b;
    printf("The remainder is : %d",r);
 


    return 0;
}