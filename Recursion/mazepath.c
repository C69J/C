#include<stdio.h>
int maze(int x){
    if(x==1 || x==0) return 1;
    return x*maze(x-1);
}
int nCr(int n, int r){
    return maze(n)/(maze(r)*maze(n - r));
}
int main(){
    int m,n;
    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);
    
    // Calculate number of ways to move from top-left to bottom-right
    int totalWays=nCr(m+n-2, m-1);
    printf("Total number of ways to move from top-left to bottom-right are : %d", totalWays);
    return 0;
}