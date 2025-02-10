#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        int a=64+i-1;
        for (int j=1; j<=n-i; j++)printf(" ");
        int c=65;
        for (int k=1; k<=i; k++)
        {   
            char ch=(char)c;
            printf("%c", c);
            c++;
        }
        for (int l=1; l<=i-1; l++)
        {   
            char ch=(char)a;
            printf("%c", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}