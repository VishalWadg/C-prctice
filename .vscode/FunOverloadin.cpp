#include<iostream>
using namespace std;
int vol(int r,int h){
    return(3.14*r*r*h);
}
int vol(int a){
    return(a*a*a);
}
int vol(int l,int b,int h){
    return(l*b*h);
}
int main(){
    cout<<"The volume of cylinder with radius 3 and hight 5 is "<<vol(3,5)<<endl;
    cout<<"The volume of cube with side 6 is "<<vol(6)<<endl;
    cout<<"The volume of couboid with length 5, breadth 3 and hight 7 is "<<vol(5,3,7)<<endl;
    return 0;
}