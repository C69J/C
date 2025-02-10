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
    int x, pair=0;
    printf("Enter the sum of pairs : ");
    scanf("%d",  &x);
    for (int i=0; i<=n-1; i++)
    {
        for (int j=i+1; j<=n-1; j++)
        {
            if (arr[i]+arr[j]==x)
            {pair++;
            printf("The pairs are (%d,%d)\n",arr[i], arr[j]);}

        }
    }
    printf("The total number of pairs are : %d ", pair);
    
    return 0;
    }