#include<iostream>
using namespace std;
// In Call By Value The value Passed Gets Copied & Doesn't Affect Original Value
int sum(int a,int b);
int main(){
    int a,b;
    cout<<"Enter any two numbers : ";
    cin>>a>>b;
    cout<<"the addition of two numbers stored in a is : "<<sum(a,b);
    cout<<"\n still the value of a is unchanged and it is : "<<a; // Value of a in main function is unchanged
    return 0;
}
int sum(int a,int b){
    a+=b;
    return a;
}