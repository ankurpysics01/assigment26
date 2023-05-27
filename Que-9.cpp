// 9. Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.

#include<iostream>
using namespace std;

class Bill{
    int units;
    float rate;
    public:
        void setUnits(int u){
            units = u;
        }
        void setrate(){
            if(units<100){
                rate = 1.20;
            }
            else if(units>100 && units<200){
                rate = 2;
            }
            else{
                rate = 3;
            }
        }
        void display(){
            cout<<"Rate is "<<rate<<endl;
            cout<<"Your total bills is = "<<units*rate<<endl;
        }
};

int main(){
    Bill bill;
    int b;
    cout<<"Enter your total units = ";
    cin>>b;
    bill.setUnits(b);
    bill.setrate();
    bill.display();

    return 0;
}