#include<stdio.h><string.h>
int main(){
    char source[50]="Hello";
    char destination[20]="Hii";

    printf("The length of first string is %d\n", strlen(source));
    int res=strcmp(source, destination);
    printf("%d\n", res);

    return 0;
}