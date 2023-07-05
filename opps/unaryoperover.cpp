#include<iostream>
using namespace std;
class Box{
    int l,w,h;
    public:
    void setdata(int a,int b,int c){
        l=a;
        w=b;
        h=c;
    }
    int getdata(){
        return l*w*h;
    }
    Box operator++(int){
        Box t;
        t.l=l-l++;
        t.w=w-w++;
        t.h=h-h++;
        return t;
    }
};
int main(){
    Box a,b;
    a.setdata(2,5,8);
    cout<<"volume of Box A is : "<<a.getdata()<<endl;
    a++;//3*6*9
    b=a;
    cout<<"volume of Box B is : "<<b.getdata()<<endl;
}