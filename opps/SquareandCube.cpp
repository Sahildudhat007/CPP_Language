#include<iostream>
using namespace std;
class Base{
    protected:
    int n;
    public:
    void setData(){
        cout<<"Enter N : ";
        cin>>n;
    }
};
class Square : public Base{
    public:
    void Getsqr(){
        cout<<"Square "<<n<<" : "<<n*n<<endl;
    }
};
class Cube : public Base{
    public:
    void GetCube(){
        cout<<"Cube "<<n<<" : "<<n*n*n<<endl;
    }
};
int main(){
    Square s;
    s.setData();
    s.Getsqr();

    Cube c;
    c.setData();
    c.GetCube();
}