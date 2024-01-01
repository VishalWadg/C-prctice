#include<iostream>
using namespace std;
inline int sum(int,int);  /*1)Inline function is recomended not to use in recursions 
                            2)Inline function is recomended not to use when there is a static variable being used */
int main(){
    int a,b,c,d;
    cout<<"enter 4 numbers : ";
    cin>>a>>b>>c>>d;
    cout<<"The sum of a,b is : "<<sum(a,b)<<endl;
    cout<<"The sum of c,d is : "<<sum(c,d)<<endl;
    cout<<"The sum of a,c is : "<<sum(a,c)<<endl;
    cout<<"The sum of a,d is : "<<sum(a,d)<<endl;
    return 0;
}
int sum(int x,int y){
    return (x+y);
}