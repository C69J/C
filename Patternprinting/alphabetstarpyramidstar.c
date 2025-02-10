#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);

    int nsp=1;
    int nst=n-1;
    
    int c=65;
    for (int m=1; m<=2*n-1; m++)
    {
        char ch=(char)c;
        printf("%c", ch);
        c++;
    }
    printf("\n");
    
    for (int i=1; i<=n-1; i++)
    {
        int c=65;
        for (int j=1; j<=nst; j++)
        {
            char ch=(char)c;
            printf("%c", ch);
            c++;
        }
        for (int k=1; k<=nsp; k++)
        {
           printf(" ");
           c++;
        }
        for (int l=1; l<=nst; l++)
        {
            char ch=(char)c;
            printf("%c", ch);
            c++;
        }
      nst--;
      nsp+=2;
      printf("\n");
    }
    return 0;
}