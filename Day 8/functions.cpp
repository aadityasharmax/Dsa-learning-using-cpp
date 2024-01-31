// Learning functions 

// a += b is equivalent to a = a + b;

#include<iostream>
using namespace std;

int power(){
    int a ; int b ;
    cin>>a>>b;
    
    int ans = 1;
    for(int i=1; i<=b ; i++){
        ans = a * ans ;
    }

    return ans ;
}



int main()
{
    cout<<"Enter numbers : "<<endl;
    cout<<"Answer is : "<<power()<<endl;
    return 0;
}