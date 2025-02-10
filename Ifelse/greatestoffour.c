#include<stdio.h>
int main()
{
    int a,b,c,d;
   printf("Enter first number : ");
   scanf("%d",&a);
   printf("Enter second number : ");
   scanf("%d",&b);
   printf("Enter third number : ");
   scanf("%d",&c);
   printf("Enter fourth number : ");
   scanf("%d",&d);

   if (a>b)
   {
    if(a>c)
    {
        if(a>d){printf("The greatest is : %d",a);}
        else{printf("The greatest is : %d",d);}
    }
    if(c>a){
        if(c>d){printf("The greatest is : %d",c);}
        else{printf("The greatest is : %d",d);}
    }
   }

   if(b>a)
   {
    if(b>c)
    {
        if(b>d){printf("The greatest is : %d",b);}
        else{printf("The greatest is : %d",d);}

    }
    if(c>b)
    {
        if(c>d){printf("The greatest is : %d",c);}
        else{printf("The greatest is : %d",d);}

    }

   }
    return 0;
}