#include<iostream>
using namespace std;
class binary{
    string s;
    void ch_ckstring(void);
    void onescomp(void);
    void display(void);
    public:
    void readstring(void);
    // void ch_ckstring(void);
    // void onescomp(void);
    // void display(void);
}s;                                   // creating an instance ie object of class along with class
void binary::readstring(void){
    cout<<"Enter a bianry string : "<<endl;
    cin>>s;
    ch_ckstring();      // These are   
    onescomp();         //           three nested               
    display();          //                          member functions
}
void binary::ch_ckstring(void){
    for(int i=0;i<s.length();i++ ){
        if(s.at(i)!='1' && s.at(i)!='0'){
            cout<<"Wrong binary format."<<endl;
            exit(0);
        }
    }
}
void binary::onescomp(void){
    for(int i=0;i<s.length();i++ ){
        if(s.at(i)=='1'){
            s[i]='0';
        }
        else{
            s[i]='1';
        }
    }
}
void binary::display(){
    cout<<" The ones compliment is : "<<s;
/*     for(int i=0;i<s.length();i++ ){
        cout<<s[i];
     }*/
}

int main(){
    s.readstring();
    // s.ch_ckstring();
    // s.onescomp();
    // s.display();
    return 0;
}