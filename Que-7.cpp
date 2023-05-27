// 7. Define a class Box and write a program to enter length, breadth and height and initialise
//  objects using constructor also define member functions to calculate volume of the box.
#include <iostream>
using namespace std;

class Box
{
    int lenght, breadth, height;

public:
    Box(int l, int b, int h)
    {
        lenght = l;
        breadth = b;
        height = h;
    }

    int volume()
    {
        return (lenght*breadth*height);

    }
    void display(){
        cout<<"Lenght = "<<lenght<<" Breath = "<<breadth<<" height "<<height<<endl;
    }

};
int main(){
    Box b(5,6,7);
    int z=b.volume();
    b.display();
    cout<<"Volume is ="<<z<<endl;
    return 0;
}