#include<stdio.h>
int main(){
    //variable ka address store karne ke liye pointers use karte hai
    int a=5;
    int* x=&a;
    *x=7;//pointer ki help se kisi dusre ki address par padi hui cheez change kardi coz pehle a=5 tha and now a=7 ho gya
    printf("%p\n", x);//p format specifier ka use address ke liye hota hai
    printf("%p\n", &x);
    printf("%d", *x); //x ke andar jiss bhi variable ka address stored hai usko point karo and print karo
     
    
    return 0;}
    
