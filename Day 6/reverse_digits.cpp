// rverse digits of a given number which shows 0 when value reaches greater or shorter than INT_MAX ot INT_MIN respectively



#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int ans = 0;
    int x;
    cin>>x;
    while(x!=0){

        if( (ans > INT_MAX/10) || (ans < INT_MIN/10)){
            cout<< "0";
        }
        int digit = x %10;
        ans = (ans * 10) + digit;
        x = x/10;
    }
    cout<< ans;


}