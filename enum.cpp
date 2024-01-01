#include<iostream>
using namespace std;

int main(){
     /*   ------------------ Enum ---------------------
    SYNTAX :

    enum{member1,member2,member3,member4};
    
    */ 
   
    enum{college,department,year,division,batch,roll_no};
    
    cout<<"This is college in enum representation : "<<college<<endl;
    int randm=department;
    cout<<department<<endl;
    cout<<"This is department in enum representation using randm variable : "<<randm<<endl;
    return 0;
}