#include<stdio.h>
int main(){

    int m, n;
    printf("Enter number of rows : "); 
    scanf("%d", &n);
    printf("Enter number of columns : ");
    scanf("%d",&m);

    for(int i=1;i<=n;i++) //outer loop-> no. of lines
    {
        for(int j=1;j<=m;j++) printf("* "); //inner loop -> no. of stars in each line
        printf("\n"); //har line ke baad ek enter maarne ke liye 
    }
    
    return 0;
}