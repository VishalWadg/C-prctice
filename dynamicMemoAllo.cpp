// DYNAMIC MEMORY ALLOCATION
#include<iostream>
using namespace std;
int main(){
    
    int a=10;//here value of a is stored in stack.
    
    int*p=new int();//allocating memory in heap
    *p=12;//value at address p
    cout<<*p<<endl;//prints address of heap mem.location storing 12
    delete(p);//deallocating memory. 
    cout<<p<<endl;//this is dangling pointer.
    cout<<a;
return 0;
}