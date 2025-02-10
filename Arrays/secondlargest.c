#include<stdio.h>
#include<limits.h>
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
    int smax=INT_MIN, max=INT_MIN;
    for(int i=0; i<=n-1;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]) smax=arr[i];
    }
    printf("%d and %d are maximum and second maximum elements of array.", max, smax);
    return 0;
    }
