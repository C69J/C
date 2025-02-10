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
    int p;
    printf("Enter the element number you want to print : ");
    scanf("%d", &p);
    if (p>0 && p<=n)
    {
       printf("Element number %d is %d", p , arr[p-1]);
    }
    else printf("You entered invalid element number.");
    
    
    return 0;
}