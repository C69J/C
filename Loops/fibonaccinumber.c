#include<stdio.h>
int main(){
    int n;
    printf("Enter the nth term : ");
    scanf("%d", &n);

    if (n==1)printf("The first fibonacci number is : 1");
    else if(n==2)printf("The second fibonacci number is : 1");
    else{
        int a=1, b=1, sum=0;
        for (int i=0; i<n-2; i++)
            {
              sum=a+b;
              a=b;
              b=sum;
            }
            printf("The %dth fibonacci number is %d", n, sum);
        }
    
    

    /* int a=1, b=1, sum=1;
    for (int i = 0; i < n-2; i++)
    {
       sum=a+b;
       a=b;
       b=sum;

    }
    printf("The %dth fibonacci number is %d", n, sum); code done by sir but doesn't give zeroth fibonacci number*/
    

    return 0;
}