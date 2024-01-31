// Notes calculator program 

#include<iostream>
using namespace std;
int main (){
    int amt;
    int n100, n50 ,n20 , n1;
    n100 = n50 = n20 = n1 = 0;
    cout<<"ENTER THE AMOUNT OF CURRENCY"<<endl;
    cin>>amt;
    switch(amt>=100){
        case 1 : 
        n100 = amt/100;
        amt -= n100 * 100;
        break;
    }

    switch(amt>=50){
        case 1 : 
        n50 = amt/50;
        amt -= n50 * 50;
        break;
    }

    switch(amt>=20){
        case 1 : 
        n20 = amt/20;
        amt -= n20 * 20;
        break;
    }

    switch(amt>=1){
        case 1 : 
        n1 = amt/1;
        amt -= n1 * 1;
        break;
    }
    
    cout<<"Number of 100 rupee notes required is :" <<n100<<endl;
cout<<"Number of 50 rupee notes required is :" <<n50<<endl;
cout<<"Number of 20 rupee notes required is :" <<n20<<endl;
cout<<"Number of 1 rupee notes required is :" <<n1<<endl;

}


