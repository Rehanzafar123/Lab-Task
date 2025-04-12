
//Grade check
#include<iostream>
using namespace std;
int main(){
     int percentage;
     cout<<"Enter the percentage:\t"<<endl;
     cin>>percentage;
     if(percentage>=90){
        cout<<"Grade = A";
     }
     else if(percentage>=80){
        cout<<"Grade = B";
     }
     else if(percentage>=70){
        cout<<"Grade = C";
     }
     else if(percentage>=60){
        cout<<"Grade = D";
     }
     else{
        cout<<"Fail.";
     }
    return 0;
}