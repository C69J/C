#include<stdio.h>
int main(){
    int a, b;

    // Input values
    printf("Enter first integer : ");
    scanf("%d", &a);
    printf("Enter second integer : ");
    scanf("%d", &b);

    // Logical AND
    if(a>0 && b>0){printf("Both %d and %d are positive\n", a, b);}
    else{printf("At least one of %d and %d is not positive\n", a, b);}

    // Logical OR
    if (a==0 || b==0){printf("At least one of %d and %d is zero\n", a, b);}
    else{printf("Neither %d nor %d is zero\n", a, b);}

    // Logical NOT
    if(!(a < 0)){printf("%d is not negative\n", a);}
    else{printf("%d is negative\n", a);}

    return 0;
}