#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a single character";
     cin>>c;
     if(c >= '0' && c <= '9'){
        cout<<"The character is a digit"<<endl;
     }
     else if(c >= 'A' && c <='Z'){
        cout<<"The letter is an uppercase letter"<<endl;
     }
     else if(c >= 'a' && c <='z'){
        cout<<"The letter is an lowercase letter"<<endl;
     }
     else{
        cout<<"The letter is a spacial character";
     }
     return 0;
}