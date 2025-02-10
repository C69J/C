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
    int max=arr[0];
    for (int i=0; i<=n-1; i++)
    {
        if (max<arr[i])max=arr[i];
    }
    printf("The maximum value of elements of array is %d", max);
    
    return 0;
}