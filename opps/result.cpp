#include<iostream>
#include<iomanip>
using namespace std;
class result{
    int eng,guj,hindi,total;
    float per;
    public:
    void setter(){
        cout<<"enter english marks :";
        cin>>eng;
        cout<<"enter gujrati marks :";
        cin>>guj;
        cout<<"enter hindi marks :";
        cin>>hindi;
        cal();
    }
    void cal(){
        total=eng+guj+hindi;
        per=total/3;
    }
    void getter(){
       /* cout<<"\n";
        cout<<"value of eng :"<<eng<<endl;
        cout<<"value of guj :"<<guj<<endl;
        cout<<"value of hindi :"<<hindi<<endl;
        cout<<"value of total :"<<t<<endl;
        cout<<"value of per :"<<setprecision(4)<<per<<endl;*/
        cout<<"\n";
        cout<<"eng\tguj\thindi\ttotal\tper"<<endl;
        cout<<eng<<"\t"<<guj<<"\t"<<hindi<<"\t"<<total<<"\t"<<setprecision(4)<<per;
    }
}; 
int main(){
    result s;
    s.setter();
    s.getter();
}