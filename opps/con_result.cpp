#include<iostream>
using namespace std;
class result{
    int rollno,english,science,gujrati,total;
    char name;
    float per;
    public:
    result(){
        cout<<"enter rollno : ";
        cin>>rollno;
        cout<<"enter name : ";
        cin>>name;
        cout<<"enter english marks : ";
        cin>>english;
        cout<<"enter science marks : ";
        cin>>science;
        cout<<"enter gujrati marks : ";
        cin>>gujrati;
        calculat();
    }
    void calculat(){
        total=english + science + gujrati;
        per=total/3;
    }
    void disp(){
        cout<<"rollno:"<<rollno<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"english marks:"<<english<<endl;
        cout<<"science:"<<science<<endl;
        cout<<"gujrati:"<<gujrati<<endl;
        cout<<"total:"<<total<<endl;
        cout<<"per:"<<per<<endl;
    }
};
int main(){
    result r;
    r.calculat();
    r.disp();
}