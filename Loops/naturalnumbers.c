#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Natural numbers upto %d are\n", n);
    for(int i=1; i<=n; i++)printf("%d ",i);
    return 0;
}