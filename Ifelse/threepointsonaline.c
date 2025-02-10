#include<stdio.h>
int main(){
    float x1,x2,x3,y1,y2,y3;
    printf("Enter first point : ");
    scanf("%f %f", &x1, &y1);
    printf("Enter second point : ");
    scanf("%f %f", &x2, &y2);
    printf("Enter third point : ");
    scanf("%f %f", &x3, &y3);
    float a,b,c,d;
    a=x2-x1;
    b=x3-x2;
    c=y2-y1;
    d=y3-y2;
    float m1,m2;
    m1=c/a;
    m2=d/b;

    if(a==0 && b==0 && c==0 && d==0){printf("All three points are same");}
    if(a==0 && b==0 && c!=0 && d!=0){printf("Slope is undefined");}
    if(m1==m2 && a!=0 && b!=0){printf("All three points lie on a line.");}
    if(m1!=m2 && a!=0 && b!=0){printf("Given points do not lie on a line.");}
    return 0;
}