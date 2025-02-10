#include<stdio.h>
int main(){
    int a;
    printf("Enter any integer : ");
    scanf("%d", &a);
    printf("Entered number is : %d\n", a);
    printf("The size of given integer is : %zu bytes\n", sizeof(a));

    float b;
    printf("Enter any floating number : ");
    scanf("%f", &b);
    printf("Entered floating number is : %f\n", b);
    printf("The size of given floating number is : %zu bytes\n", sizeof(b));

    char ch;
    printf("Enter any character : ");
    scanf(" %c", &ch);
    printf("Entered character is : %c\n", ch);
    printf("The size of given integer is : %zu bytes\n", sizeof(ch));

    short int d;
    printf("Enter any integer : ");
    scanf("%i", &d);
    printf("Entered short int is : %i\n", d);
    printf("The size of given short int is : %zu bytes\n", sizeof(d));

    long int e;
    printf("Enter any integer : ");
    scanf("%lu", &e);
    printf("Entered long int is : %lu\n", e);
    printf("The size of given long int is : %zu bytes\n", sizeof(e));

    double f;
    printf("Enter any integer : ");
    scanf("%lf", &f);
    printf("Entered number is : %lf\n", f);
    printf("The size of given double is : %zu bytes\n", sizeof(f));

    long double g;
    printf("Enter any integer : ");
    scanf("%Lf", &g);
    printf("Entered long double is : %Lf\n", g);
    printf("The size of given integer is : %zu bytes\n", sizeof(g));
    return 0;
}