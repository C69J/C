#include<stdio.h>
int main(){
    int n;
    unsigned long long fact=1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int i=1;
    while (i<=n){
        fact=fact*i;
        i++;
    }

    printf("Factorial of %d = %llu\n", n, fact);
    return 0;
}