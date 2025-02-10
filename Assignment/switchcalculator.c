#include<stdio.h>
int main(){
    char operator;
    double a,b,c;

    // Input values
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter first number : ");
    scanf("%lf", &a);
    printf("Enter first number : ");
    scanf("%lf", &b);

    // Perform calculation based on operator
    switch (operator)
    {
        case '+':
            c = a+b;
            printf("%lf+%lf = %lf\n", a,b,c);
            break;
        case '-':
            c = a-b;
            printf("%lf-%lf = %lf\n", a, b,c);
            break;
        case '*':
            c= a*b;
            printf("%lf*%lf = %lf\n", a, b, c);
            break;
        case '/':
            if (b!=0)
            {
                c = a/b;
                printf("%lf/%lf = %lf\n", a, b, c);
            } 
            else{printf("Error: Division by zero\n");}
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}