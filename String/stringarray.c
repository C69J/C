#include<stdio.h>
#include<string.h>

int main(){
    int i;
    printf("enter i :");
    scanf("%d", &i);
    char arr[]={'H', 'e', 'l', 'l', 'o','\0'};
    char str[]="World";

    printf("%c\n%s", arr[i], str);

    return 0;
}