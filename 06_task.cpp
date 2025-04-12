
//Maximum number
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first value:\t"<<endl;
    cin>>a;
    cout<<"Enter the second value:\t"<<endl;
    cin>>b;
    cout<<"Enter the third value:\t"<<endl;
    cin>>c;
if (a > b && a >c){
cout<<"A is greater.";
}
else if(b > a && b > c){
cout<<"B is greater.";
}
else if(c > a && c > b){
cout<<"C is greater.";
}
    return 0;

}
