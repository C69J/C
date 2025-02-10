#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        if (i%2!=0)
        {   
            int a=1;
            for (int j=1; j<=i; j++)
            { 
             printf("%d ", a);
              if(a==0)a=1;
              else a=0;
            }  
            printf("\n");  
        }
        else
        {
            int b=0;
            for (int j=1; j<=i; j++)
            {  
              printf("%d ", b);
               if (b==0){b=1;}
               else{b=0;} 
            }     
            printf("\n");         
        }           
              
    }           
    return 0;       
}