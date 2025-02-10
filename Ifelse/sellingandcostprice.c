#include<stdio.h>
int main(){
    float cp;
    printf("Enter cost price : ");
    scanf("%f",&cp);
    float sp;
    printf("Enter selling price : ");
    scanf("%f",&sp);
    if(sp>cp){
        float p;
        p=sp-cp;
        printf("You made a profit of :%f ",p);}
    else if(sp==cp)printf("You did not make any profit nor you are in loss.");
    else printf("You are in loss.");
    
    return 0;

}