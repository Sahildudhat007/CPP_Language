#include<iostream>
using namespace std;
class Square1{
    protected:
    int n;
    public:
    void setN(){
        cout<<"enter N : ";
        cin>>n;
    }
};
class Square2 : public Square1{
    protected:
    int i=1;
};
class Derived : public Square2 {
    public: 
    void getN(){
        for(;i<=n;i++){
        cout<<" "<<i<<" : "<<i*i<<endl;
        }
    }
};
int main(){
    Derived d;
    d.setN();
    d.getN();
    
}    