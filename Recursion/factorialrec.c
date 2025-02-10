#include<stdio.h>
int factorial(int n)
{
    if (n==1||n==0) return 1;// base case
    if (n<0) return -1;
    return n*factorial(n-1);
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int fact=factorial(n);
    if (fact== -1) printf("Factorial of negative number does not exist.");
    else printf("The factorial is %d", fact);
    
    return 0;
}