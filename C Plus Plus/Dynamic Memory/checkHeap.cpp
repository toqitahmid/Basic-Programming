#include<bits/stdc++.h>
using namespace std; 

int *ptr;

void fun(){

    int x = 10;
    ptr = &x;
    cout << "fun -> " << *ptr << endl;
    return;
}

int main(){
    fun();
    cout << "main -> " << *ptr;

}