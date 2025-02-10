#include<stdio.h>
int power(int b, int p){
    if (p==0)return 1;
    return b*power(b, p-1);
}
int main(){
    int b,p;
    printf("Enter base : ");
    scanf("%d", &b);
    printf("Enter exponent : ");
    scanf("%d", &p);
    int c=power(b,p);
    printf("%d raised to the power %d is : %d", b,p,c);
    return 0;
}
