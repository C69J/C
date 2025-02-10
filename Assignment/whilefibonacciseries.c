#include<stdio.h>

int main(){
    int n, a=0, b=1, sum=0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    int count = 1;
    while (count<=n){
        if(count==1){printf("%d ", a);}
        else if(count == 2){printf("%d ", b);}
        else{
            sum=a+b;
            a=b;
            b=sum;
            printf("%d ", sum);
        }
        count++;
    }
    return 0;
}
