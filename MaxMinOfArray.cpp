#include<iostream>
using namespace std;
typedef struct maxmino
{
    int max;
    int min;
}ma;

int maxmin(int arr[],int n);
int main(){
    int n;
    cout<<"Enter the number of elements you want to add to the array : ";
    cin>>n;
    int arr[n];
    cout<<"Eneter the elements in the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxmin(arr,n);
    return 0;
}
int maxmin(int arr[],int n){
    ma high;
    ma low;
    high.max=arr[0];
    for(int i=1;i<n;i++){
        if(high.max<arr[i]){
           high.max=arr[i];
        }
    }
    cout<<"the highest no in the arrary is : "<<high.max<<endl;               // I still dont know how to return multiple values as output
    low.min=arr[0];
    for(int j=1;j<n;j++){
        if (low.min>arr[j])
        {
            low.min=arr[j];
        }
    }
    cout<<"the lowest no in the array is : "<<low.min;
   
    
}
