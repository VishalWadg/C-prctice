#include<iostream>
using namespace std;
int main(){
    /*There are three types of loops in c++
    1)For loop
    2)While loop
    3)Do-while loop
    */
   int i=0,b=0;
   for ( i; i < 10; i++)
   {
    cout<<i<<endl;    
   }
  while (b<=20)
  {
    cout<<"\t"<<b<<endl;
    b+=2;
  }
  do
  {
    cout<<b<<endl;
    b+=2;
  } while (b<=40);
   return 0;
}