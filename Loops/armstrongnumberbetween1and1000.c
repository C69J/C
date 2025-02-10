#include<stdio.h>
int main(){

    int n, r, sum;
    for (int i=0; i<=1000; i++)
    {
       n=i, sum=0;
       while (n>0)
       {
         r=n%10;
         sum=(r*r*r)+sum;
         n=n/10;
       }
       if(sum==i)printf("%d\n", i);
       
        
    }
    

    return 0;
}