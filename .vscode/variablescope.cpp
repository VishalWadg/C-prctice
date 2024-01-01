#include<iostream>
using namespace std;
/*                    GLOBAL VARIABLE                   */
int c=10; 

int main(){
    int a,b,c; // Local variable by the same name as that of global variable
    c=22,b=14,a=44;
    cout<<"The value of local variable 'c' is : "<<c<<endl; // Local variable has precidence over global variable
    cout<<"The value of global variable 'c' is : "<<::c<<endl; // Printing gloabl variable using scope resolution operator

    /*              Float , Double and Long Double  LITERALS             */
    float me=3.14;
    double tu=334.44;
    long double to=33434.23;
    cout<<"the size of float a is : "<<sizeof(me)<<endl;
    cout<<"the size of double tu is : "<<sizeof(tu)<<endl;
    cout<<"the size of long double to is : "<<sizeof(to)<<endl;
    /*                        REFFERENCE   VARIABLE                     */ 
    int &d=b;
    cout<<"Printing value of variable 'b' using refference variable : "<<d<<endl;
    d=33;
    cout<<"after updating value of d the value of b is : "<<b<<endl; // Since reffernce variable acts as nickname to a variable if we change its value the value of main variable also changes
    /*          TypeCasting              */
    cout<<int(me)<<endl;
    int i= int(me);
    cout<<i<<endl;
    cout<<float(i);

    return 0;
}