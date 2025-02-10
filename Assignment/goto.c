#include<stdio.h>
int main(){
    int i=1;

    while(i<=10){
        if (i == 5){
            i++;
            goto skip;
        }
        printf("%d\n", i);
        skip:
        i++;
    }
    return 0;
}
