#include<iostream>
using namespace std;
class Square{
    protected:
    int n;
    public:
    void setN(){
        cout<<"enter N : ";
        cin>>n;
    }
};
class Derived : public Square{
    public: 
    void getN(){
        int i;
        for(i=1;i<=n;i++){
        cout<<" "<<i<<" : "<<i*i<<endl;
        }
    }
};
int main(){
    Derived d;
    d.setN();
    d.getN();
}