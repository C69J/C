#include <stdio.h>

int main() {
    int a, b, c;

    // Input values
    printf("Enter first integer : ");
    scanf("%d", &a);
    printf("Enter second integer : ");
    scanf("%d", &b);

    // Bitwise AND assignment
    c = a;
    c &= b;
    printf("%d &= %d results in %d\n", a, b, c);

    // Bitwise OR assignment
    c = a;
    c |= b;
    printf("%d |= %d results in %d\n", a, b, c);

    // Bitwise XOR assignment
    c = a;
    c ^= b;
    printf("%d ^= %d results in %d\n", a, b, c);

    // Left shift assignment
    c = a;
    c <<= b;
    printf("%d <<= %d results in %d\n", a, b, c);

    // Right shift assignment
    c = a;
    c >>= b;
    printf("%d >>= %d results in %d\n", a, b, c);

    return 0;
}
