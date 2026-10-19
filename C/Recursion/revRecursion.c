#include <stdio.h>

void revRecursion(int n, int i){
    if (i > n) {
        return;
    }
    revRecursion(n, i + 1);
    printf("%d\n", i);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    revRecursion(n, 1);
    return 0;
}