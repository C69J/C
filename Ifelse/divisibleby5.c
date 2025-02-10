#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n%5==0)printf("The number is divisible.");
    else printf("The number is not divisible.");

    return 0;
}