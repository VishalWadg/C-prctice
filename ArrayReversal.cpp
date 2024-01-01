#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of elements you want to add in the array : ";
    cin>>n;
    int arr[n],temp,j=(n-1);
    cout<<"Enter the elements of array : \n";
    for(int b=0;b<n;b++){
        cin>>arr[b];
    }
    cout<<"\n The array before reversal is : \n";
    for(int c=0;c<n;c++){
        cout<<arr[c]<<endl;
    }
    for(int i=0;i<((n/2)+(n%2));i++){              //If even then n%2=0 & if odd then n%2=1 i.e. [(n/2)+0] if even & [(n/2)+1] if odd        
            temp=arr[i];
            arr[i]=arr[j];                            // Simple Swaping
            arr[j]=temp;
            j--;
    }
    cout<<"The reversed array is : \n";
    for(int a=0;a<n;a++){
        cout<<arr[a]<<endl;
    }
    return 0;
}