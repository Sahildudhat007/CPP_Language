#include<iostream>
using namespace std;
class Factorial{
    protected:
    int n;
    public:
    void setN()
    {
        cout<<"enter the value of n : ";
        cin>>n;
    }
};
class Derived : public Factorial
{
    public:
    void getN(){
        int i,fect=1;
        for(i=1;i<=n;i++){
            fect=fect*i;
            cout<<" "<<i<<" : "<<fect<<endl;
        }   
    }
};
int main(){
    Derived d;
    d.setN();
    d.getN();
}