#include<iostream>
using namespace std;
int &returnbyref(int &x,int &y);
int main(){
    int a,b;
    cout<<"Enter any two numbers : ";
    cin>>a>>b;
    returnbyref(a,b)=23;
    cout<<a;
    return 0;
}
int &returnbyref(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    return x;
}