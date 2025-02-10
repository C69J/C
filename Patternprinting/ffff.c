#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

     int nsp = 0;
     int nst = n;

    for (int i = 0; i < n; i++) {
        int val = 1;
        for (int j = 0; j < nst; j++) {
            printf("%d", val);
            val++;
        }
        for (int k = 0; k < nsp; k++) {
            printf(" ");
        }
        val--; 
        for (int l = 0; l < nst; l++) {
            printf("%d", val);
            val--;
        }

        nst--;
        nsp += 2;

        printf("\n");
    }

    return 0;
}
   
