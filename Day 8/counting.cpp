// Printing counting

// Void keyword is used when no output is given by the computer 

#include<iostream>
using namespace std;

void counting(int n){
    for(int i=0;i<=n;i++){
        cout<<i<<endl;
    }

}


int main()
{
    int n;
    cout<<"Enter the number till which you want to print counting : "<<endl;
    cin>>n;
    counting(n);
    
    return 0;
}