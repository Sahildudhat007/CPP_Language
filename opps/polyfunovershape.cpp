#include<iostream>
using namespace std;
class volum{
    public:
    int work(int a, int b, int c){
        return a*b*c;
    }
    double work(int a, double b, int c){
        return (4/3)*3.14*a*b*c;
    }
    double work(int a, int b, double c){
        return (4/3)*3.14*a*b*c;
    }
    double work(double a, double b){
        return 0.33*a*b;
    }
    double work(int a,double b){
        return 0.33*3.14*(a*a)*b;
    }
};
int main(){
    volum v;
    cout<<"Rectangular or Cuboid Volume : "<<v.work(4,3,5)<<endl;
    cout<<"Square or Rectangular Pyramid Volume : "<<v.work(5,3.4,5)<<endl;
    cout<<"Ellipsoid Volume : "<<v.work(3,6,5.4)<<endl;
    cout<<"Pyramid Volume : "<<v.work(3.4,5.6)<<endl;
    cout<<"Right Circular Clon Volume : "<<v.work(3,4.5)<<endl;
}