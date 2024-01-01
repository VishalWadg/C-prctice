#include<iostream>
using namespace std;

int main(){
    int **a,*b,c;
    c=10;
    b=&c;
    a=&b;
    cout<<a<<endl;    // address of variable b
    cout<<*a<<endl;    // value stored at address of b
    cout<<**a<<endl;  // value stored at address stored in b
    return 0;
}