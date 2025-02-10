#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<=(n-1); i++)
    {
       int a=i+1;
       printf("Enter element number %d : ", a);
       scanf("%d", &arr[i]);
    }
    for (int i=0; i<=n-1; i++)
    {
        printf("The elements are %d ", arr[i]);
    }
    
return 0;
}