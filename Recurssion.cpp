#include<iostream>
using namespace std;
int fib(int n);
int facto(int k);
int main(){
    int a;
    cout<<"Enter the term : ";
    cin>>a;
    cout<<"The "<<a<<"th term in fibonacci series is : "<<fib(a)<<endl;  // n th term in fibonacii series
    cout<<"The "<<a<< "factorial  is : "<<facto(a);            //Factorial of n i.e. n!
    return 0;
}
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int facto(int k){
    if(k<=1){
        return 1;
    }
    return k* facto(k-1);
}
