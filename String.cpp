#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str(5, 'l');
    cout << "5 times l : " << str << endl; // Printing a character n times
    string s1, s2, s3, s4, s5;
    s1 = "This is string s1"; // Default string assigning
    cout << s1 << endl;
    cout << "Enter a string s2 : \n";
    getline(cin, s2);   // Taking input using getline(cin,string_name) it takes input until it encounters delimiting character
    cout << s2 << endl; // also it replaces privious value stored in the string object
    s3 = " Hello this is the string s3 that is going to be cleared using .clear()";
    cout << "s3 before clearing : " << s3 << endl;
    s3.clear();
    cout << "After clearing s3 " << s3;

    return 0;
}