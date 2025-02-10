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
    int x, triplet=0;
    printf("Enter the sum of pairs : ");
    scanf("%d",  &x);
    for (int i=0; i<=n-1; i++){
        for (int j=i+1; j<=n-1; j++){
            for (int k=j+1; k<=n-1; k++){
                if(arr[i]+arr[j]+arr[k]==x){
                triplet++;
                printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);}   
            
            }
        }
    }   
    
    
    printf("The total number of triplets are : %d ", triplet);
    
    return 0;
    }