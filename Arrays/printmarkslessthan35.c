#include<stdio.h>
int main(){
    int n;
    printf("Enter number of students : ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<=n-1; i++)
    {
       int a=i+1;
       printf("Enter the marks of %dth student : ",a);
       scanf("%d", &arr[i]);
    }
    for (int i=0; i<=n-1; i++)
    {
        int b=i+1;
       if(arr[i]<=35) printf("%dth student got less than 35\n",b);
       else printf("%dth student is passed.\n",b);

    }
    return 0;
}