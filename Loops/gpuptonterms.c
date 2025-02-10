#include<stdio.h>
int main(){
     int a,r,n;
     printf("Enter first term : ");
     scanf("%d", &a);
     printf("Enter common ratio : ");
     scanf("%d", &r);
     printf("Enter nth term : ");
     scanf("%d", &n);

     for(int i=1;i<=n;i++)
     {
      printf("%d ",a);
      a=a*r;
     }
     return 0;
}