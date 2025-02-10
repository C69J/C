#include<stdio.h>
int main(){

   long long int n;
    printf("Enter the number : ");
    scanf("%lld", &n);

    long long int count=0;
    while (n>0)
    {
        n=n/10;
        count++;
    }

    printf("The number of digits are %lld", count);
    
    return 0;
}