#include<iostream>
using namespace std;
int main(){
    int n,i,up,low;
    cout<<"enter lower no of range : ";
    cin>>low;
    cout<<"Enter upper no of range : ";
    cin>>up;
    for(n=low;n<=up;n++){
        for(i=2;i<n;i++){
        if(n%i==0){
            break;
        }
    }
    if(i==n){
        cout<<i<<endl;
    }
    }
    
    return 0;
}