#include<stdio.h>

void passByRefarence(int *x){
    *x = 20;
}

int main ()
{

    int x;
    printf("Enter a value : ");
    scanf("%d", &x);

    passByRefarence(&x);
    printf("After passing refarence of variable x : %d", x);
    return 0;
}