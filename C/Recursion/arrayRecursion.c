#include<stdio.h>
void display(int *a, int n, int i){
    if(n == i){
        return;
    }
    printf("%d\n", a[i]);
    display(a,n,i+1);
}
int main(){
    int n = 5;
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("\n");
    display(a, n, 0);
    return 0;
}