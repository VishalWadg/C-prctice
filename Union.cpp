#include<iostream>
using namespace std;

/*                ------------------ UNION ----------------
    - Union is a user-defined datatype. 
    - All the members of union share same memory location. 
    - Size of union is decided by the size of largest member of union.

                ---------------- SYNTAX ---------------
    union unionname
    {
       int member1;
       char member2;                             * string is not supported in union *
       float member3;
    };
 */

typedef union paymode
{
    int cash;
    float gold;             // why can't I use string in union
}pa;


int main(){
    pa rent;
    pa bill;
    pa payment;
    payment.cash=20000000;
    cout<<"Mangya's salary is : "<<payment.cash<<" in cash."<<endl;  // data type set to cash
    bill.cash=7000;
    cout<<"Bill to be paid in cash is : "<<bill.cash<<endl;
    rent.gold=4.56;                                              //  data type set to gold
    cout<<"Rent to be paid in cash is : "<<rent.cash<<"           but this is a garbage value ."<<endl;
    cout<<"the rent to be paid in gold is : "<<rent.gold<<" grams."<<endl;
    cout<<"Cash member prints garbage value when memory is being used by gold : "<<rent.cash<<endl;                // Garbage value will be printed since data type currently being used is set to gold and not cash

   
    return 0;
}
