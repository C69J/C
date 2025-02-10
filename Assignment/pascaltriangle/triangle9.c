#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i=1;i<=(n+1)/2;i++){
        for (int j=1;j<=(n+1)/2-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i=1;i<=(n-1)/2;i++){
        for (int j=1;j<=i;j++){
            printf(" ");
        }
        for(int j=1;j<=(n+1)/2-i;j++)
        {
            printf("*");
        }
        printf("\n");
}
return 0;
}
