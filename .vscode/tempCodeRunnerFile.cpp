#include<iostream>
using namespace std;
float sumofn(float ,int );
int main(){
    int n;
    cout<<"Enter the no of elements you want to enter : ";
    cin>>n;
    float arr[n];
    cout<<"Enter the elements in the array : ";
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"The sum of elements in array is : "<<sumofn(arr[n], n);
    return 0;
}
float sumofn(float arr [],int b){
    float sum=0;
    for (int i = 0; i < b; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
    
}