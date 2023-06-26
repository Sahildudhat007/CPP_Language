#include<iostream>
using namespace std;
int main()
{
    int unit;
    float bill,sur_charge;
    cout<<"enter value of unit:";
    cin>>unit;
    if(unit<=100){
        bill=50+unit*0.60;
    }
    else if(unit<=300){
        bill=50+60+(unit-100)*0.80;
    }
    else{
        bill=50+60+160+(unit-300)*0.90;
    }
    cout<<"your bill amount:"<<bill;
    if(bill>=300){
        sur_charge=bill*0.15;
        bill=bill+sur_charge;
        cout<<"\nyour sur_charge:"<<sur_charge;
        cout<<"\nyour final bill amount:"<<bill;
    }
}