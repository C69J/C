#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int r=0, ld=0;
    while (n>0)
    {
        ld=n%10;
        r=r*10+ld;
        n=n/10;

    }
    printf("Reverse of given number is : %d", r);
    return 0;
}