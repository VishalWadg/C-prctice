#include<iostream>
using namespace std;

/*    ------------------Structure Syntax ----------------------
struct   UDataType_Name
{
    int something;
    char something;
    float something;
};
   */

/*    -----------Structure without using Typedef Keyword------------    */
struct student
{
    int roll_no;
    string fav_sub;
    char div;
};

 

/*     --------------Structure using  Typedef Keyword-----------------    */
typedef struct fruit
{
    int price;
    string taste;
    string region;
}fr;

int main(){
    // Two Variables of Student DataType are Declared
    struct student mangya;
    struct student pandya;

    mangya.roll_no=23;
    mangya.div='B';
    mangya.fav_sub="none";
    // Mangya
    cout<<"The roll number of student Mangesh is : "<<mangya.roll_no<<endl;
    cout<<"Mangya likes this subject : "<<mangya.fav_sub<<endl;
    cout<<"Mangya is in this divsion : "<<mangya.div<<endl;
    pandya.div='c';
    pandya.fav_sub="Pandya likes every subject !";
    pandya.roll_no=44;
    // Pandya
    cout<<"Pandya's div is : "<<pandya.div<<endl;
    cout<<"Pandya's  favorit subject is : "<<pandya.fav_sub<<endl;
    cout<<"Pandya's roll number is : "<<pandya.roll_no<<endl;



    // Three Variables of Fruit DataType are Declared 

    fr apple;               // because of Typedef Keyword we can only use fr instead of "struct fruit " 
    fr mango;               // because of Typedef Keyword we can only use fr instead of "struct fruit " 
    fr banana;              // because of Typedef Keyword we can only use fr instead of "struct fruit "  
    apple.price=100;
    apple.region="cold";
    apple.taste="saur";
    banana.price=60;
    cout<<"The price of the apple is : "<<apple.price<<endl;
    cout<<"Apple's grow in "<< apple.region<<" regions."<<endl;
    cout<<"The taste of the apple is :"<<apple.taste<<endl;
    return 0;
}