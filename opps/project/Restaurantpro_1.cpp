#include<iostream>
#include<math.h>
#include<string>
using namespace std;
class Restaurant{
    public:
        int order,n,a[32]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        float Bill=0,IGst,SGst,T_Gst,Disc,FBill;
        string Name,Mobile,items[32];
    Restaurant()
    {
        cout<<"\n\n\t\t\t\t\t\tSHREEJI RESTAURANT"<<endl;
        cout<<"\t\t\t\t__________________________________________________"<<endl;
        cout<<"\n\t\t\t\t\t\t\tMenu"<<endl;
    }
    void set(){
        cout<<"\nEnter Name : ";
        cin>>Name;
        cout<<"\nEnter Mobile No : ";
        cin>>Mobile;
    }
    void get(){
        cout<<"\n\t\t\t\tName : "<<Name<<endl;
        cout<<"\n\t\t\t\tMobile No. : "<<Mobile<<endl;
    }
        int Starter(){
        cout<<"\n\n\t\t\t\tStarter:-"<<endl;
        cout<<"\t\t\t\t..........."<<endl;
        cout<<"\n\t\t\t\tItem\t\t\t\t\t\tPrice"<<endl;
        cout<<"\t\t\t\t1.French Frise\t\t\t\t\t150/-"<<endl;
        cout<<"\t\t\t\t2.Sweet corn chat\t\t\t\t130/-"<<endl;
        cout<<"\t\t\t\t3.Paneer Pakoda\t\t\t\t\t250/-"<<endl;
        cout<<"\t\t\t\t4.Kothimbir vadi\t\t\t\t200/-"<<endl;
        cout<<"\t\t\t\t5.sev puri\t\t\t\t\t120/-"<<endl;
        cout<<"\t\tPress 0 if you complet order"<<endl;
        cout<<"\t\tPress 10 if you Back To Manu"<<endl;
        cout<<"Your Order : ";
        cin>>order;

        switch(order){
            case 1:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[0]+=n;
            items[0]="French Frise";
            Bill=Bill+(n*150);
            break;
            case 2:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[1]+=n;
            items[1]="Sweet corn chat";
            Bill=Bill+(n*130);
            break;
            case 3:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[2]+=n;
            items[2]="Paneer Pakoda";
            Bill=Bill+(n*250);
            break;
            case 4:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[3]+=n;
            items[3]="Kothimbir vadi";
            Bill=Bill+(n*200);
            break;
            case 5:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[4]+=n;
            items[4]="sev puri";
            Bill=Bill+(n*120);
            break;
            case 0:
             break;
            case 10:
             Bill=Bill;
            break;
            default:
                cout<<"wrong choice\n";
            break;
        }return Bill;
    }
    int Soup(){
        cout<<"\t\t\t\tSoup:-"<<endl;
        cout<<"\t\t\t\t........."<<endl;
        cout<<"\n\t\t\t\tItem\t\t\t\t\t\tPrice"<<endl;
        cout<<"\t\t\t\t1.Manchow Soup\t\t\t\t\t120/-"<<endl;
        cout<<"\t\t\t\t2.Mix Vegetable Soup\t\t\t\t200/-"<<endl;
        cout<<"\t\t\t\t3.Lemon and Coriander Soup\t\t\t350/-"<<endl;
        cout<<"\t\t\t\t4.Tomato Soup\t\t\t\t\t250/-"<<endl;
        cout<<"\t\t\t\t5.Creamy Corn Soup\t\t\t\t300/-"<<endl;
        cout<<"\t\tPress 0 if you Complet Order"<<endl;
        cout<<"\t\tPress 10 if you Back To Manu"<<endl;
        cout<<"Your Order : ";
        cin>>order;

        switch(order){
            case 1:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[5]+=n;
            items[5]="Manchow Soup";
            Bill=Bill+(n*120);
            break;
            case 2:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[6]+=n;
            items[6]="Mix Vegetable Soup";
            Bill=Bill+(n*200);
            break;
            case 3:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[7]+=n;
            items[7]="Lemon and Coriander Soup";
            Bill=Bill+(n*350);
            break;
            case 4:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[8]+=n;
            items[8]="Tomato Soup";
            Bill=Bill+(n*250);
            break;
            case 5:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[9]+=n;
            items[9]="Creamy Corn Soup";
            Bill=Bill+(n*300);
            break;
            case 0:
             break;
            case 10:
             Bill=Bill;
            break;
            default:
                cout<<"wrong choice\n";
            break;
        }return Bill;
    }
    int Burger(){
        cout<<"\t\t\t\tBurger:-"<<endl;
        cout<<"\t\t\t\t........"<<endl;
        cout<<"\n\t\t\t\tItem\t\t\t\t\t\tPrice"<<endl;
        cout<<"\t\t\t\t1.BK Veggie Burger\t\t\t\t250/-"<<endl;
        cout<<"\t\t\t\t2.Veg Double Whopper\t\t\t\t500/-"<<endl;
        cout<<"\t\t\t\t3.Veg Whopper\t\t\t\t\t450/-"<<endl;
        cout<<"\t\t\t\t4.Cheese Burger\t\t\t\t\t500/-"<<endl;
        cout<<"\t\t\t\t5.Crispy Burger\t\t\t\t\t400/-"<<endl;
        cout<<"\t\tPress 0 if you Complet Order"<<endl;
        cout<<"\t\tPress 10 if you Back To Manu"<<endl;     
        cout<<"Your Order : ";
        cin>>order;

        switch(order){
            case 1:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[10]+=n;
            items[10]="BK Veggie Burger";
            Bill=Bill+(n*250);
            break;
            case 2:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[11]+=n;
            items[11]="Veg Double Whopper";
            Bill=Bill+(n*500);
            break;
            case 3:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[12]+=n;
            items[12]="Veg Whopper";
            Bill=Bill+(n*450);
            break;
            case 4:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[13]+=n;
            items[13]="Cheese Burger";
            Bill=Bill+(n*500);
            break;
            case 5:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[14]+=n;
            items[14]="Crispy Burger";
            Bill=Bill+(n*400);
            break;
            case 0:
             break;
            case 10:
             Bill=Bill;
            break;
            default:
                cout<<"wrong choice\n";
            break;
        }return Bill;
    }
    int Pizza(){
        cout<<"\t\t\t\tPizza:-"<<endl;
        cout<<"\t\t\t\t........"<<endl;
        cout<<"\t\t\t\tItem\t\t\t\t\t\tPrice"<<endl;
        cout<<"\t\t\t\t1.Cheese Pizza\t\t\t\t\t650/-"<<endl;
        cout<<"\t\t\t\t2.Paneer Paratha Pizza\t\t\t\t700/-"<<endl;
        cout<<"\t\t\t\t3.Margherita Pizza\t\t\t\t680/-"<<endl;
        cout<<"\t\t\t\t4.Tanduri Paneer\t\t\t\t600/-"<<endl;
        cout<<"\t\t\t\t5.Cheese Corn Pizza\t\t\t\t550/-"<<endl;
        cout<<"\t\tPress 0 if you Complet Order"<<endl;
        cout<<"\t\tPress 10 if you Back To Manu"<<endl;
        cout<<"Your Order : ";
        cin>>order;

        switch(order){
            case 1:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[15]+=n;
            items[15]="Cheese Pizza";
            Bill=Bill+(n*650);
            break;
            case 2:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[16]+=n;
            items[16]="Paneer Paratha Pizza";
            Bill=Bill+(n*700);
            break;
            case 3:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[17]+=n;
            items[17]="Margherita Pizza";
            Bill=Bill+(n*680);
            break;
            case 4:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[18]+=n;
            items[18]="Tanduri Paneer";
            Bill=Bill+(n*600);
            break;
            case 5:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[19]+=n;
            items[19]="Cheese Corn Pizza";
            Bill=Bill+(n*550);
            break;
            case 0:
             break;
            case 10:
             Bill=Bill;
            break;
            default:
                cout<<"wrong choice\n";
            break;
        }return Bill;
    }
    int Drink(){
        cout<<"\t\t\t\tDrink:-"<<endl;
        cout<<"\t\t\t\t........"<<endl;
        cout<<"\t\t\t\tItem\t\t\t\t\t\tPrice"<<endl;
        cout<<"\t\t\t\t1.Sprite\t\t\t\t\t80/-"<<endl;
        cout<<"\t\t\t\t2.Thums UP\t\t\t\t\t80/-"<<endl;
        cout<<"\t\t\t\t3.Limca\t\t\t\t\t\t80/-"<<endl;
        cout<<"\t\t\t\t4.Pepsi\t\t\t\t\t\t80/-"<<endl;
        cout<<"\t\t\t\t5.coca Cola\t\t\t\t\t80/-"<<endl;
        cout<<"\t\tPress 0 if you Complet Order"<<endl;
        cout<<"\t\tPress 10 if you Back To Manu"<<endl;
        cout<<"Your Order : ";
        cin>>order;

        switch(order){
            case 1:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[20]+=n;
            items[20]="Sprite";
            Bill=Bill+(n*80);
            break;
            case 2:
            cout<<"Enter Quantity : ";
            cin>>n;
             a[21]+=n;
            items[21]="Thums UP";
            Bill=Bill+(n*80);
            break;
            case 3:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[22]+=n;
            items[22]="Limca";
            Bill=Bill+(n*80);
            break;
            case 4:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[23]+=n;
            items[23]="Pepsi";
            Bill=Bill+(n*80);
            break;
            case 5:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[24]+=n;
            items[24]="coca Cola";
            Bill=Bill+(n*80);
            break;
            case 0:
             break;
            case 10:
             Bill=Bill;
            break;
            default:
                cout<<"wrong choice\n";
            break;
        }return Bill;
    }
    int Dosa(){
        cout<<"\t\t\t\tDosa:-"<<endl;
        cout<<"\t\t\t\t........"<<endl;
        cout<<"\t\t\t\tItem\t\t\t\t\t\tPrice"<<endl;
        cout<<"\t\t\t\t1.Masala Dosa\t\t\t\t\t150/-"<<endl;
        cout<<"\t\t\t\t2.Plain Dosa\t\t\t\t\t100/-"<<endl;
        cout<<"\t\t\t\t3.Palak Paneer Dosa\t\t\t\t170/-"<<endl;
        cout<<"\t\t\t\t4.Rava Masala Dosa\t\t\t\t130/-"<<endl;
        cout<<"\t\t\t\t5.Paneer Plain Dosa\t\t\t\t160/-"<<endl;
        cout<<"\t\tPress 0 if you Complet Order"<<endl;
        cout<<"\t\tPress 10 if you Back To Manu"<<endl;
        cout<<"Your Order : ";
        cin>>order;

        switch(order){
            case 1:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[25]+=n;
            items[25]="Masala Dosa";
            Bill=Bill+(n*150);
            break;
            case 2:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[26]+=n;
            items[26]="Plain Dosa";
            Bill=Bill+(n*100);
            break;
            case 3:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[27]+=n;
            items[27]="Palak Paneer Dosa";
            Bill=Bill+(n*170);
            break;
            case 4:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[28]+=n;
            items[28]="Rava Masala Dosa";
            Bill=Bill+(n*130);
            break;
            case 5:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[29]+=n;
            items[29]="Paneer Plain Dosa";
            Bill=Bill+(n*160);
            break;
            case 0:
             break;
            case 10:
             Bill=Bill;
            break;
            default:
                cout<<"wrong choice\n";
            break;
        }return Bill;
    }  
    int Fulldise(){
        cout<<"\t\t\t\tFull Dise:-"<<endl;
        cout<<"\t\t\t\t........"<<endl;
        cout<<"\t\t\t\tItem\t\t\t\t\t\tPrice"<<endl;
        cout<<"\t\t\t\t1.Gujrati Dise\t\t\t\t\t600/-"<<endl;
        cout<<"\t\t\t\t2.Pnjabi Dise\t\t\t\t\t500/-"<<endl;
        cout<<"\t\tPress 0 if you Complet Order"<<endl;
        cout<<"\t\tPress 10 if you Back To Manu"<<endl;
        cout<<"Your Order : ";
        cin>>order;

        switch(order){
            case 1:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[30]+=n;
            items[30]="Gujrati Dise";
            Bill=Bill+(n*600);
            break;
            case 2:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[31]+=n;
            items[31]="Pnjabi Dise";
            Bill=Bill+(n*500);
            break;
            case 0:
             break;
            case 10:
             Bill=Bill;
            break;
            default:
                cout<<"wrong choice\n";
            break;
        }return Bill;
    } 
    int Coffee(){
        cout<<"\t\t\t\tCoffee:-"<<endl;
        cout<<"\t\t\t\t........"<<endl;
        cout<<"\t\t\t\tItem\t\t\t\t\t\tPrice"<<endl;
        cout<<"\t\t\t\t1.Espresso\t\t\t\t\t150/-"<<endl;
        cout<<"\t\t\t\t2.Iced Iatter\t\t\t\t\t100/-"<<endl;
        cout<<"\t\t\t\t3.Black Coffee\t\t\t\t\t170/-"<<endl;
        cout<<"\t\t\t\t4.Americano\t\t\t\t\t130/-"<<endl;
        cout<<"\t\t\t\t5.Cold Coffee\t\t\t\t\t160/-"<<endl;
        cout<<"\t\tPress 0 if you Complet Order"<<endl;
        cout<<"\t\tPress 10 if you Back To Manu"<<endl;
        cout<<"Your Order : ";
        cin>>order;

        switch(order){
            case 1:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[32]+=n;
            items[32]="Espresso";
            Bill=Bill+(n*150);
            break;
            case 2:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[33]+=n;
            items[33]="Iced Iatter";
            Bill=Bill+(n*100);
            break;
            case 3:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[34]+=n;
            items[34]="Black Coffee";
            Bill=Bill+(n*170);
            break;
            case 4:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[35]+=n;
            items[35]="Americano";
            Bill=Bill+(n*130);
            break;
            case 5:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[36]+=n;
            items[36]="Cold Coffee";
            Bill=Bill+(n*160);
            break;
            case 0:
             break;
            case 10:
             Bill=Bill;
            break;
            default:
                cout<<"wrong choice\n";
            break;
        }return Bill;
    } 
    int Icecream(){
        cout<<"\t\t\t\tIcecream:-"<<endl;
        cout<<"\t\t\t\t........"<<endl;
        cout<<"\t\t\t\tItem\t\t\t\t\t\tPrice"<<endl;
        cout<<"\t\t\t\t1.Bananas Foster\t\t\t\t150/-"<<endl;
        cout<<"\t\t\t\t2.Beer With Tart\t\t\t\t200/-"<<endl;
        cout<<"\t\t\t\t3.Blue Moon\t\t\t\t\t250/-"<<endl;
        cout<<"\t\t\t\t4.Butterscotch In Cone\t\t\t\t130/-"<<endl;
        cout<<"\t\t\t\t5.Cornflower In Cone\t\t\t\t160/-"<<endl;
        cout<<"\t\tPress 0 if you Complet Order"<<endl;
        cout<<"\t\tPress 10 if you Back To Manu"<<endl;
        cout<<"Your Order : ";
        cin>>order;

        switch(order){
            case 1:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[37]+=n;
            items[37]="Bananas Foster";
            Bill=Bill+(n*150);
            break;
            case 2:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[38]+=n;
            items[38]="Beer With Tart";
            Bill=Bill+(n*200);
            break;
            case 3:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[39]+=n;
            items[39]="Blue Moon";
            Bill=Bill+(n*250);
            break;
            case 4:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[40]+=n;
            items[40]="Butterscotch In Cone";
            Bill=Bill+(n*130);
            break;
            case 5:
            cout<<"Enter Quantity : ";
            cin>>n;
            a[41]+=n;
            items[41]="Cornflower In Cone";
            Bill=Bill+(n*160);
            break;
            case 0:
             break;
            case 10:
             Bill=Bill;
            break;
            default:
                cout<<"wrong choice\n";
            break;
        }return Bill;
    }
    int Cancel(){
        for(int i=0;i<=20;i++){
            if(a[i]>0){
                a[i]=0;
                items[i]="";
            }
        }
        return Bill=0;
    }
    int Discount(int b){
        if(b>=5000)
            Disc=b*0.1;
        else
            Disc=0;
        return Disc;
    }
    int Gst(int b){
        SGst=round(b*0.025);
        IGst=round(b*0.025);
        T_Gst=SGst+IGst;
        return T_Gst;
    }
    int Final_Bill(int b,int Disc_Amt,int Gst)
    {
        FBill=b-Disc_Amt+Gst;
        return FBill;
    }
    void Ord_det(){
        for(int i=0;i<=32;i++){
            if(!items[i].empty())
                cout<<"\n\t\t\t\t"<<items[i]<<" : "<<a[i]<<endl;
        }
    }
};
int main(){
    Restaurant R;
    R. set();
    int ch, b=0, Gst=0, Disc_Amt=0, Bill=0, x=0;
    do{
        cout<<"\n\t\t\t\t1.Starter"<<endl;
        cout<<"\t\t\t\t2.Soup"<<endl;
        cout<<"\t\t\t\t3.Burger"<<endl;
        cout<<"\t\t\t\t4.Pizza"<<endl;
        cout<<"\t\t\t\t5.Drink"<<endl;
        cout<<"\t\t\t\t6.Dosa"<<endl;
        cout<<"\t\t\t\t7.Fulldise"<<endl;
        cout<<"\t\t\t\t8.Coffee"<<endl;
        cout<<"\t\t\t\t9.Icecream"<<endl;
        cout<<"\t\tPress 0 if you Complet Order"<<endl;
        cout<<"\t\tPress 10 if you Back To Manu"<<endl;

        cout<<"Enter Your Choice : ";
        cin>>ch;
        switch(ch){
            case 1:
                x=0;
                b=R.Starter();
                break;
            case 2:
                x=0;
                b=R.Soup();
                break;
            case 3:
                x=0;
                b=R.Burger();
                break;
            case 4:
                x=0;
                b=R.Pizza();
                break;
            case 5:
                x=0;
                b=R.Drink();
                break;
            case 6:
                x=0;
                b=R.Dosa();
                break;
            case 7:
                x=0;
                b=R.Fulldise();
                break;           
            case 8:
                x=0;
                b=R.Coffee();
                break;
            case 9:
                x=1;
                b=R.Icecream();
                break;
            case 0:
                break;
            case 10:
                b=0;
                break;
            default:
                cout<<"wrong choice\n";
            break;
        }
    }
    while(ch!=0);
    R. get();
    R.Ord_det();
    Disc_Amt = R.Discount(b);
    Gst = R.Gst(b-Disc_Amt);
    Bill = R.Final_Bill(b,Disc_Amt,Gst);
    cout<<"\n\t\t\t\tYour Final Bill  : "<<b<<endl;
    cout<<"\n\t\t\t\tYour Disc        : "<<Disc_Amt<<endl;
    cout<<"\n\t\t\t\tSGST             : "<<Gst/2<<endl;
    cout<<"\n\t\t\t\tTGST             : "<<Gst/2<<endl;
    cout<<"\n\t\t\t\tTotal GST        : "<<Gst<<endl;
    cout<<"\n\t\t\t\tYour Final Bill  : "<<Bill;
}
