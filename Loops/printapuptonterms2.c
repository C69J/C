#include<stdio.h>
int main(){
    int a, n, d;
    printf("Enter first term : ");
    scanf("%d",&a);
    printf("Enter common difference : ");
    scanf("%d",&d);
    printf("Enter nth term : ");
    scanf("%d",&n);

    for (int i=1; i<=n; i++)
    {
       printf("%d ",a);
       a=a+d;
    }
    return 0;
}