// 24/1/24  11:15 
//   Using if else statements 
// Making a number checker which checks whether the number is positive or negative




#include<iostream>
using namespace std;
int main(){
    int a ;
    cout << "Enter the value of a "<<endl;
    cin >> a;
    if(a>0){
        cout<<"The number is positive"<<endl;
    }

    else if(a<0){
        cout<<"The numeber is negative"<<endl;

    }

    else{
        cout<<"The numeber is 0"<<endl;
    }
    
}
