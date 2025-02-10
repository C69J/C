#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>=0)printf("The absolute value is : %d",n);
    else{
        int a=n*(-1);
        printf("The absolute value is : %d",a);}
return 0;
}