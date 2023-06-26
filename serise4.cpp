#include<iostream>
using namespace std;
int main()
{
    int i,n,t1=0,t2=1,nt=t1+t2;
    cout<<"enter the no:";
    cin>>n;
    cout<<t2;
    for(i=1;i<=n;i++){
        cout<<" ";
        cout<<nt;
        t1=t2;
        t2=nt;
        nt=t1+t2;
    }
}