#include <stdio.h>
int* takeArrayElement(int *a, int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    return a;
}
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];

    int *b = takeArrayElement(a, n);
    for(int i = 0; i<n; i++){
        printf("%d\n", b[i]);
    }
    return 0;
}