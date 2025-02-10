#include<stdio.h>

int main(){
    int a, b, result;

    // Input values
    printf("Enter first integer : ");
    scanf("%d", &a);
    printf("Enter second integer : ");
    scanf("%d", &b);


    // Addition
    result = a+b;
    printf("%d+%d = %d\n", a, b, result);

    // Subtraction
    result = a-b;
    printf("%d-%d = %d\n", a, b, result);

    // Multiplication
    result = a*b;
    printf("%d*%d = %d\n", a, b, result);

    // Division
    if (b!=0)
    {
        float c=(float)a/b;  // Cast to float for accurate division
        printf("%d/%d = %.2f\n", a, b, c);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }

    // Modulus
    if(b!=0){
        result = a%b;
        printf("%d%%%d = %d\n", a, b, result);
    }
    else
    {
        printf("Modulus by zero is not allowed.\n");
    }

    // Increment
    printf("Value of a before increment: %d\n", a);
    a++;
    printf("Value of a after increment: %d\n", a);

    // Decrement
    printf("Value of b before decrement: %d\n", b);
    b--;
    printf("Value of b after decrement: %d\n", b);

    return 0;
}