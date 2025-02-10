#include<stdio.h>

int main(){
    int a, b;

    // Input values
    printf("Enter first integer : ");
    scanf("%d", &a);
    printf("Enter second integer : ");
    scanf("%d", &b);

    // Addition assignment
    int result = a;
    result += b;
    printf("%d += %d results in %d\n", a, b, result);

    // Subtraction assignment
    result = a;
    result -= b;
    printf("%d -= %d results in %d\n", a, b, result);

    // Multiplication assignment
    result = a;
    result *= b;
    printf("%d *= %d results in %d\n", a, b, result);

    // Division assignment
    if(b!=0) 
    {
        result = a;
        result /= b;
        printf("%d /= %d results in %d\n", a, b, result);
    } 
    else 
    {
        printf("Division by zero is not allowed.\n");
    }

    // Modulus assignment
    if (b!=0)
    {
        result = a;
        result %= b;
        printf("%d %%= %d results in %d\n", a, b, result);
    } 
    else
    {
        printf("Modulus by zero is not allowed.\n");
    }

    return 0;
}
