#include<stdio.h>
#include<string.h>
int main(){
    char str1[5]="Hello";
    char str2[5]="World";
    char a;
    printf("Enter Character which is common : ");
    scanf("%c", &a);

    
    strchr(str1, a);
    char *found=strchr(str1, a);
    if (found!=NULL)
    {
        printf("Found");
    }
    else{
        printf("Not found");
    }
    


    return 0;
}