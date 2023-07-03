#include<iostream>
using namespace std;
class area{
    public:
    area (){
        cout<<"\n\tarea of shape ";
    }
    area (int a){
        cout<<"calculate area of square : "<<a*a<<endl;
    }
    area (double a){
        cout<<"calculate area of circle : "<<3.14*(a*a)<<endl;
    }
    area (int a,int b){
        cout<<"calculate area of rectangle : "<<a*b<<endl;
    }
    area (double a,double b){
        cout<<"calculate area of triangle : "<<0.5*(a*b)<<endl;
    }
};
int main(){
    area a(5),b(2.3),c(3,5),d(3.5,3.5);
}