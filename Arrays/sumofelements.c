#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<=n-1; i++)
    {
       int a=i+1;
       printf("Enter element %d : ",a);
       scanf("%d", &arr[i]);
    }
    int sum=0;
    for (int i=0; i<=n-1; i++)
    {
        sum=sum+arr[i];
    }
    printf("The sum is : %d", sum);
    return 0;
    }
    