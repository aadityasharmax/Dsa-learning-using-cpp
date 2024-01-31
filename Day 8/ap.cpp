// give nth term in output 
//  we will be given value of n 
#include<iostream>
using namespace std;

int ap(int n){
    int formula = (3*n)+7;
    return formula ;

}


int main()
{
    int n;
    cout<<"Enter the number ";
    cin >> n;

    cout<<"Nth term is :"<< ap(n);

    
    return 0;
}