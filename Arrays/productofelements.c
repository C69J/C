#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<=n-1; i++)
    {
        int a=i+1;
        printf("Enter element %d : ", a);
        scanf("%d", &arr[i]);
    }
    int b=1;
    for (int i=0; i<=n-1; i++)
    {
        int c=i+1;
        b=b*c;
    }
    printf("The product of elements is : %d",b);
    
    
    return 0;
}