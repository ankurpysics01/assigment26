//8. Define a class Bank and define member functions to read principal , rate of interest and
// year. Another member functions to calculate simple interest and display it. Initialise all details
// using constructor
#include<iostream>
using namespace std;
class Bank{
    private:
    int p,f,t;
    public:
    int si;
    Bank(int principle,int final,int year ){
        p=principle;
        f=final;
        t=year;
    }
    void dataget(){
        cout<<" principle value : "<<p<<" final value :"<<f<<" Time : "<<t<<endl;
    }
    void simplerate(){
        si =(p*f*t)/100;
    }
    void display(){
        cout<<" the simple instrest rate : "<<si<<endl;
    }
};
int main(){
    Bank b1(1000,2000,5);
    b1.dataget();
    b1.simplerate();
    b1.display();
    return 0;
}