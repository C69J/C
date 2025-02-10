#include<stdio.h>
int power(int b, int p){
    if(p==0) return 1;
    int x=power(b,p/2);
    if(p%2==0) return x*x;
    else return x*x*b;
}
int main(){
    int b,p;
    printf("Enter the base : ");
    scanf("%d", &b);
    printf("Enter the exponent : ");
    scanf("%d", &p);
    power(b,p);
    printf("The answer is : %d",power(b,p));
    return 0;
}