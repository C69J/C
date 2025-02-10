#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int c=n;
    int arm=0, r;
    while (n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }

    if (c==arm)printf("The given number is Armstrong number.");
    else printf("The number is not Armstrong number.");
    
    return 0;
}