#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : \n";
    cin>>age;
    if(age<18&&age>0){
        cout<<"You are not eligibel to vote.";
    }
    else if (age==0){
        cout<<"You are not born yet ." /* code */;
    }
    else{
        cout<<"You are eligible to vote.";
    }
    switch (age)
    {
    case 8:
        cout<<"You are a child.";
        break;
    case 99:
        cout<<"Your a rare human being.";
        break;
    case 55:
        cout<<"your a normal human adult.";
        break;
    default:
        cout<<"Your  special";
        break;
    }
    
    return 0;
}