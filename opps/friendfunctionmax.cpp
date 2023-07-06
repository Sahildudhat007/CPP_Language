#include<iostream>
using namespace std;
class value{
    int a,b;
    friend value find(value t);
    public:
    void setdata(){
        cout<<"enter value of A : ";
        cin>>a;
        cout<<"enter value of B : ";
        cin>>b;
    }
};
value find(value t){
    if(t.a>t.b)
        cout<<"max value is A : "<<t.a;
    else
        cout<<"max value is B : "<<t.b;
}
int main(){
    value v;
    v.setdata();
    find(v);
}