#include <stdio.h>
int count(int n){
    if(n == 0) return 0;
    printf("count %d\n", n);
    count(n-1);
}
int main(){
    int n = 5;
    count(n);
    return 0;
}