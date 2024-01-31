// 1 represent prime number ans 0 represent not a prime number 


#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i = 2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"Is a prime number";
    }
    else{
        cout<<"It is not a prime numeber";
    }
}