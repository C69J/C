#include<stdio.h>
int main(){
    int i;
    printf("ASCII values for digits 0 to 9:\n");
    for (i = '0'; i <= '9'; i++) {
        printf("Character: %c, ASCII value: %d\n", i, i);
    }

    printf("\nASCII values for lowercase letters a to z:\n");
    for (i = 'a'; i <= 'z'; i++) {
        printf("Character: %c, ASCII value: %d\n", i, i);
    }

    printf("\nASCII values for uppercase letters A to Z:\n");
    for (i = 'A'; i <= 'Z'; i++) {
        printf("Character: %c, ASCII value: %d\n", i, i);
    }

    printf("\nASCII value for space:\n");
    printf("Character: ' ', ASCII value: %d\n", ' ');

    char special_chars[] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '=', '+', '[', ']', '{', '}', ';', ':', '\'', '\"', '\\', '|', ',', '.', '<', '>', '/', '?'};
    int num_special_chars = sizeof(special_chars) / sizeof(special_chars[0]);
    printf("\nASCII values for special characters:\n");
    for (i = 0; i < num_special_chars; i++) {
        printf("Character: %c, ASCII value: %d\n", special_chars[i], special_chars[i]);
    }
    return 0;
}