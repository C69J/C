#include<stdio.h>
int main(){
    int n;
    printf("Enter the year : ");
    scanf("%d",&n);
    
    if(n%4==0)printf("The year is leap.");
    else printf("The year is not leap.");
    
    return 0;
}