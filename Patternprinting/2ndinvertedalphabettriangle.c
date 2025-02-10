#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);

    int a=65;
    for (int i=1; i<=n; i++)
    {
       for (int j=1; j<=(n+1)-i; j++)
       {
        char ch=(char)a;
        printf("%c ", ch);
        a=a+1;
       }
       printf("\n");
       
    }
    
    return 0;
}