#include<iostream>
using namespace std;
class Base{
    protected:
    int n;
    public:
    void setN(){
        cout<<"Enter the n : ";
        cin>>n;
    }
};
class cal : public Base{
    protected:
    int x=1;
};
class output : public cal{
    public:
    void getN(){
        for(;x<=10;x++){
            cout<<n<<"*"<<x<<"="<<n*x<<endl;
        }
    }
};
int main(){
    output tab;
    tab.setN();
    tab.getN();
}