// 4. Define a class Counter and Write a program to Show Counter using Constructor
#include <iostream>
using namespace std;

class counter
{
private:
    static int count;

public:

    counter(){   // default contructor 
        count++;
    }

    void int_count(){
        count++;
    }

    int getCount(){
        return count;
    }
};
int counter :: count;

int main(){
    counter c1,c2,c3;
    cout<<c1.getCount()<<endl;
    return 0;

}