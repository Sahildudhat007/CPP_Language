#include<iostream>
using namespace std;
class Factorial1{
    protected:
    int n;
    public:
    void setN(){
        cout<<"enter N : ";
        cin>>n;
    }
};
class Factorial2 : public Factorial1{
    protected:
    int i=1,Fact=1;
};
class Derived : public Factorial2 {
    public: 
    void getN(){
        for(;i<=n;i++){
            Fact=Fact*i;
            cout<<" "<<i<<" : "<<Fact<<endl;
        }
    }
};
int main(){
    Derived d;
    d.setN();
    d.getN();
    
}    