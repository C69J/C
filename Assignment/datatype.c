#include<stdio.h>
int main(){
    int n;
    printf("Enter any integer : ");
    scanf("%d", &n);
    printf("The integer is %d\n", n);

    float a;
    printf("Enter any floating number : ");
    scanf("%f", &a);
    printf("The floating number is %f\n", a);

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("You entered: %c\n", ch);

    return 0;
}