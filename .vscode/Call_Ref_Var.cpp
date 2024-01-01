#include<iostream>
using namespace std;

float divi(float &x,float &y);
int main(){
    float a,b;
    cout<<"Enter any two numbers : ";
    cin>>a>>b;
    cout<<"The division is : "<<divi(a,b)<<endl;
    cout<<"The value of a is changed and is : "<<a;
    return 0;
}
float divi(float &x,float &y){
    x/=y;
    return x;
}