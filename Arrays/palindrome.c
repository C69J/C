#include<stdio.h>
void rev(int arr[],int n){
    int i=0,j=n-1;
    while (i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
int palindrome(int arr[], int n){
    for (int i = 0; i<n/2; i++) if(arr[i]!=arr[n-i-1]) return 0;
    return 1; 
}
int main(){
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<=n-1; i++)
    {
        printf("Enter %dth element : ", i+1);
        scanf("%d", &arr[i]);
    }
   if (palindrome(arr,n)) printf("It is a palindrome.");
   else printf("It is not a palindrome.");
   return 0;
}