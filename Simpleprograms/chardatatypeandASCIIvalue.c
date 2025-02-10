#include<stdio.h>
int main(){
    char ch;//if you predefine ch always write in single inverted comma e.g ch='a'
    printf("Enter the character : ");
    scanf("%s",&ch);   
    printf("The ASCII value of the character %c is : %d",ch,ch);
    return 0;
    }