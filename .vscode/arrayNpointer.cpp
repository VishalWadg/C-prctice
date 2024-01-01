#include<iostream>
using namespace std;
int main(){
    int arr[]={33,45,55,34,33,77};
    // Assigning address of an array to a pointer
    int*p=arr;
    cout<<"printing address of array by using pointer variable : "<<p<<endl;
    cout<<"The address of the array is : "<<arr<<endl;                        //no need to use & sign
    // GARBAGE VALUE
    cout<<"This is a garbage vlaue : "<<arr[0]<<endl;
    cout<<"Printing values in array using pointer variable p : "<<*p<<endl;
    // ARRAY NAME AS POINTER VARIABLE
    cout<<"Printing value in arrray using only array name and 'value at operator' : "<<*arr<<endl;    // since arr is address we can use value at operator to obtain value stored at that address
    //  Traversing through array using pointer variable 
    p++;
    cout<<"After incrementing pointer by 1 the value it is pointing at is : "<<*p<<endl;
    // Incrementing p by 1 does not affect array name 
      cout<<"The value at which the array name is pointing is : "<<*arr<<endl;    // arr still points at 33
    return 0;
}
