#include<stdio.h>
int main(){
    int n;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    int sum;

   if (n%2==0)
   {
    sum=-n/2;
    printf("The sum of series is : %d", sum);
   }
   else{
    sum=(n+1)/2;
    printf("The sum of series is : %d", sum);


   }
   return 0;
}