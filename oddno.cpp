#include<iostream>
using namespace std;
int main()
{
    int a,n;
    cout<<"enter tne n:";
    cin>>n;
    for(a=1;a<=n;a++){
        if(a%2!=0){
            cout<<a;
            cout<<" ";
        }
    }
}