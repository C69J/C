#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        for (int j=0; j<=i-1; j++)printf("%d ", 2*j+1);
        printf("\n");
    }
    return 0;
}