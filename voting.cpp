#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter value of a:";
    cin>>a;
    if(a>18){
        cout<<"eligible for voting:"<<a;
    }
    else{
        cout<<"not eligible for voting:"<<a;
    }
}