#include<iostream>
using namespace std;

int mult(int*a,int*b);
int main(){
    int a,b;
    cout<<"Enter any two numbers : ";
    cin>>a>>b;
    cout<<"The multiplication of two numbers is : "<<mult(&a,&b)<<endl;
    cout<<"The value of a is changed to multiplication result : "<<a;
    return 0;
}
int mult(int*a,int*b){
    *a*=*b;
    return *a;
}