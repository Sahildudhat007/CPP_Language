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
    Box operator*(Box &n){
        Box t;
        t.l=l*n.l;
        t.w=w*n.w;
        t.h=h*n.h;
        return t;
    }
};
int main(){
    Box b,a,c;
    b.setdata(2,2,2);
    cout<<"Box B volume is : "<<b.getdata()<<endl;
    a.setdata(3,3,3);
    cout<<"Box A volume is : "<<a.getdata()<<endl;
    c=a*b;
    cout<<"Box C volume is : "<<c.getdata()<<endl;
}