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
    int sumodd=0, sumeven=0;
    for (int i=0; i<=n-1; i++)
    {
       if (i%2!=0) sumodd=sumodd+arr[i];
       else sumeven=sumeven+arr[i];
    }
    printf("The difference between sum of even indexed elements and sum of odd indexed elements is : %d ", sumeven-sumodd);
    return 0;
}