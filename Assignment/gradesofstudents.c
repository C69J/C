#include<stdio.h>
int main(){
    int n;
    printf("Enter your marks : ");
    scanf("%d", &n);
    if (n>=91){printf("A+ grade");}
    if (n>=81 && n<=90){printf("A grade");}
    if (n>=71 && n<=80){printf("B+ grade");}
    if (n>=61 && n<=70){printf("B grade");}
    if (n>=51 && n<=60){printf("C+ grade");}
    if (n>=41 && n<=50){printf("C grade");}
    if (n<=40){printf("Fail");}
    
return 0;
}