#include<stdio.h>

int main(){
    int n, i=2, isPrime=1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i<=n/2){
        if (n%i==0) {
            isPrime=0;
            break;
        }
        i++;
    }

    if (n==1)printf("1 is neither prime nor composite.\n");
    else{
        if (isPrime)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }

    return 0;
}
