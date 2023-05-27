//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;

class cube{
    public:
     double side;
     double volume(){
        return (side*side*side);
     }
     cube(double side1){
        cout<<"constructor is called"<<endl;
        side = side1;
     }
     cube(){

     }
     ~cube(){
        cout<<"destructor is a called "<<side<<endl;
     }
};

int main(){
    cube c1(4);
    cube c2(2.34);
    cout<<"the side of the first cube is ="<<c1.side<<endl;
    cout<<"the volume of the first cube is ="<<c1.volume()<<endl;
    cout<<"the side of the second cube is ="<<c2.side<<endl;
    cout<<"the volume of the second cube is ="<<c2.volume()<<endl;
    return 0;
    
}

