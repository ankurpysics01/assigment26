// 5-5. Define a class Date and write a program to Display Date and initialise date object using
//  Constructors.
#include <iostream>
using namespace std;
class Date
{
    int d, m, y;

public:
    Date(int date, int month, int year)
    {
        d = date;
        m = month;
        y = year;
    }
    void display()
    {
        cout << "Date :-" << d << ":" << m << ":" << y << endl;
    }
};
int main(){
    Date d1(20, 3, 2001);
    d1.display();
    return 0;
}