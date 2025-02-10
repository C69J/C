#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<=n-1; i++)
    {
        int a=i+1;
        printf("Enter element %d : ", a);
        scanf("%d",  &arr[i]);
    }
    int x;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    int count=0;
    for (int i=0; i<=n-1; i++)
    {
        if (arr[i]>x)count++;
    }
    printf("The number of elements which is greater than x is : %d", count);
    return 0;}