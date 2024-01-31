// In this we check whether the number is even or odd 

#include<iostream>
using namespace std;

int even_odd(){
    int n;
    cout<<"Enter number "<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"Number is even "<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
    return n;
}
int main()
{
    cout<<even_odd()<<endl;
    return 0;
}