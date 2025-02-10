#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Even numbers upto %d are\n", n);
    for(int i=1; i<=n; i++)
    {
     if(i%2==0){printf("%d ", i);}
    }
    printf("\n");
    printf("Odd numbers upto %d are\n", n);
    for(int i=1; i<=n; i++)
    {
     if(i%2!=0){printf("%d ", i);}
    }
    
    return 0;
}