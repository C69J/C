#include<stdio.h>
int main(){
    int n, a;
    printf("Enter the number : ");
    scanf("%d", &n);
    a=n; //store the original number for later use
    int ld=0, r=0;
    while (n>0)
    {
       ld=n%10;
       r=r*10+ld;
       n=n/10;
    }
    int sum;
    sum=a+r; //use the original number in the sum
    printf("Sum of given number and its reverse is : %d", sum);
    return 0;
}