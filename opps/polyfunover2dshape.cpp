#include<iostream>
using namespace std;
class test{
    public:
    int shape(int a){
        return a*a;
    }
    double shape(double a){
        return 3.14*(a*a);
    }
    int shape(int a,int b){
        return a*b;
    }
    double shape(double a,double b){
        return 0.5*(a*b);
    }
};
int main(){
    test a;
    cout<<"calculate area of square : "<<a.shape(5)<<endl;
    cout<<"calculate area of circle : "<<a.shape(3.3)<<endl;
    cout<<"calculate area of rectangle : "<<a.shape(3,5)<<endl;
    cout<<"calculate area of triangle : "<<a.shape(3.5,3.5)<<endl;
}