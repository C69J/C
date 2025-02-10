#include<stdio.h>
int main()
{
   int x,y;
   printf("Enter first number: ");
   scanf("%d", &x);
   printf("Enter second number: ");
   scanf("%d", &y);

   int c=x+y, d=x-y, e=x*y,f=x/y;
   printf("The sum is : %d\n",c);
   printf("The difference is : %d\n",d);
   printf("The product is : %d\n",e);
   printf("The quotient is : %d\n",f);
return 0;
}