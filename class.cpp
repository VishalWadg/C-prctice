#include<iostream>
using namespace std;

class employee
    {
    private:
        int a,b,c;       
    public:
        int d,e;
        void setdata(int a1,int b1,int c1);
        void getdata(){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
            cout<<d<<endl;
            cout<<e<<endl;
        }
    };
void employee::setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee harry;
    harry.d=33;
    harry.e=44;
    harry.setdata(2,3,5);
    harry.getdata();
    return 0;
}