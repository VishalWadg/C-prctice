//  BUBBLE SORT ALGORITHM DESCENDING ORDER
#include<iostream>
using namespace std;

int main(){
    int n,high;
    cout<<"enter the number of elements you want to add to array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){               // In one itteration of this loop we take greatest no to the begining of the array
        for(int j=(i+1);j<n;j++){       // In one itteration of this loop we check if the arr[i] is smaller than  than arr[j]
            if(arr[i]<arr[j]){
                high=arr[i];            //  Swap if the condition is true
                arr[i]=arr[j];           
                arr[j]=high;
            }
        }
    }
    cout<<"The sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}