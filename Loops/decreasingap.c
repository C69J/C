#include<stdio.h>
int main(){

    int a, d;
    printf("Enter first term : ");
    scanf("%d",&a);
    printf("Enter common difference : ");
    scanf("%d",&d);

    for (int i=1; a>0; i++)
    {
       printf("%d ",a);
       a=a-d;
    }
  return 0;
}