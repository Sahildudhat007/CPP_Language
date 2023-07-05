#include<iostream>
using namespace std;
class student{
    int rollno,english,maths,science,total;
    char name[20];
    float per;
    public:
    void setter(){
        cout<<"enter rollno : ";
        cin>>rollno;
        cout<<"enter name : ";
        cin>>name;
        cout<<"enter english marks : ";
        cin>>english;
        cout<<"enter maths marks : ";
        cin>>maths;
        cout<<"enter science : ";
        cin>>science;
        cal();
    }
    void cal(){
        total=english+maths+science;
        per=total/3;
    }
    void getter(){
        cout<<"rollno :"<<rollno<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"english :"<<english<<endl;
        cout<<"maths :"<<maths<<endl;
        cout<<"science :"<<science<<endl;
        cout<<"total :"<<total<<endl;
        cout<<"per :"<<per<<endl;
    }
};
int main(){
    student s[1];
    int i;
    for(i=0;i<1;i++){
        s[i].setter();
    }
    for(i=0;i<1;i++){
        s[i].getter();
    }
}