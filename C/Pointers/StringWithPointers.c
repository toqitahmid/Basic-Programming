#include<stdio.h>
#include<string.h>

void YourName(char name[]){

    printf("%s ", name);
}


int main(){
    
    char name[101];
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);

    YourName(name);
    return 0;
}