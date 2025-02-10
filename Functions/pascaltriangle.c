#include<stdio.h>
int factorial(int x){
    int fact=1;
    for (int k=2; k<=x; k++)
    {
        fact=fact*k;
    }
    return fact;
    
}
int combination(int n, int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int a;
    printf("Enter number of rows : ");
    scanf("%d", &a);

    for (int i=0; i<=(a-1); i++)
    {
        for (int l=0; l<=(a+1)-i; l++)
        {
            printf(" ");
        }
        
        for (int j=0; j<=i; j++)
        {
           int icj=combination(i,j);
           printf("%d ", icj);
        }
        printf("\n");
        
    }
    
    return 0;
}