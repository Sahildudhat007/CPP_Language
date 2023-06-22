#include<iostream>
using namespace std;
int main()
{
    int sci,ac,ba,total;
    cout<<"enter sci marks:";
    cin>>sci;
    cout<<"enter ac marks:";
    cin>>ac;
    cout<<"enter ba marks:";
    cin>>ba;
    total=sci+ac+ba;
    cout<<"total is:"<<total;
    float per=total/3;
    cout<<"\nper is:"<<per;
} 