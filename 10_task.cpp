
//simple login simulation
#include<iostream>
using namespace std;
int main(){
   string username;
   int password;
   cout<<"Enter the Username:\t"<<endl;
  cin>>username;
   cout<<"Enter the passsword:\t"<<endl;
   cin>>password;
   if(password==12345){
    cout<<"Access Granted.";
   }
   else{
    cout<<"Access Denied.";
   }
    return 0;
}