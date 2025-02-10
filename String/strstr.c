#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Beauty lies in the eyes of beholder";
    char str2[]="lies";

    char *result=strstr(str1, str2);
    if (result!=NULL)
    {
       printf("Found");

    }
    else{
        printf("Not found");
    }
    
    return 0;
}
