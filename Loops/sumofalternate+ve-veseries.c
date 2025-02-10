#include<stdio.h>
int main(){
    int n;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    int sum=0;

    for (int i=1; i<=n; i++)
    {
        if (i%2==0)sum=sum-i;
        else sum=sum+i;
    }
    printf("The sum of series is : %d", sum);
    return 0;
}