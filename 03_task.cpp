//Calculator using switch statement
#include<iostream>
using namespace std;
int main(){
    int a;
    char op;
    int b;
    cout<<"Enter the first number :"<<endl;
    cin>>a;
    cout<<"Enter the operator(+,-,*,/,%) :"<<endl;
    cin>>op;
    cout<<"Enter the second number :"<<endl;
    cin>>b;
    switch(op){
        case'+':
        cout<<"Result="<<a+b<<endl;
        break;
        case'-':
        cout<<"Result="<<a-b<<endl;
        break;
        case'*':
        cout<<"Result="<<a*b<<endl;
        break;
        case'/':
        cout<<"Result="<<a/b<<endl;
        break;
        case'%':
        cout<<"Result="<<a%b<<endl;
        break;
        default:
        cout<<"invalid";
    }
        return 0;

}