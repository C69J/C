#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {  
       if(i%2!=0)
       {
        for(int j=1; j<=i; j++) printf("%d ", j);
        printf("\n");
       }
       else
       {
        int a=65;
        for (int k=1; k<=i; k++)
        {
           char ch=(char)a;
           printf("%c ", ch);
           a++;
        }
        printf("\n");
       }
    }
        
    return 0;
}