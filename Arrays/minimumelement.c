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
    int min=arr[0];
    for (int i=0; i<=n-1; i++)
    {
        if(min>=arr[i])min=arr[i];
    }
    printf("The minimum of elements of the array is : %d", min);
    
    return 0;
}