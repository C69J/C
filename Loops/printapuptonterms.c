#include<stdio.h>
int main(){
    int a, n, d;
    printf("Enter first term : ");
    scanf("%d",&a);
    printf("Enter common difference : ");
    scanf("%d",&d);
    printf("Enter nth term : ");
    scanf("%d",&n);

    for (int i=a; i<=a+(n-1)*d; i=i+d) printf("%d ",i);
    return 0;
}