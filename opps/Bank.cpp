#include<iostream>
using namespace std;
class Bank{
    int depo,with,balance=0;
    public:
    int Deposite(){
        cout<<"Enter Amount : ";
        cin>>depo;
        balance = balance + depo;
    }
    int Withdrowl(){
        cout<<"Enter Amount : ";
        cin>>with;
        balance = balance - with;
    }
    int Show_Balance(){
        cout<<"Your Balance is : "<<balance<<endl;
    }
};
int main(){
    int ch;
    Bank b;
    cout<<"Press 1 for Diposite"<<endl;
    cout<<"Press 2 for Withdrowl"<<endl;
    cout<<"Press 3 for Show Balance"<<endl;
    cout<<"Press 0 for Exit"<<endl;
    cout<<"\n\n";
    do{
        cout<<"Choice Your Transaction : ";
        cin>>ch;

        switch(ch){
            case 1:
                b.Deposite();
                break;
            case 2:
                b.Withdrowl();
                break;
            case 3:
                b.Show_Balance();
                break;
            case 0:
                break;
        }
    }while(ch!=0);
}