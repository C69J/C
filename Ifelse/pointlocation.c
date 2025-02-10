#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates : ");
    scanf("%d %d",&x,&y);
    if (x==0 && y==0)printf("The point is origin");
    else if (x==0)printf("Point lies on y-axis");
    else if (y==0)printf("Point lies on x-axis");
    else printf("Point is neither on x-axis nor on y-axis");
    return 0;
}