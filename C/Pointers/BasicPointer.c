#include<stdio.h>
int main(){

    int X = 10;
    printf("%d \n", X);
    printf("%p \n", &X);
    
    int *ptr = &X;
    printf("%p \n", ptr);
    
    *ptr = 20;
    printf("%d \n", X);

}