// 10. Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.
#include<iostream>
using namespace std;

class StaticCount{
    public:
    static int s_count;
    void increment(){
        s_count++;
    }
    void display(){
        cout<<" count is ="<<s_count<<endl;
    }
};
int StaticCount::s_count = 0;
int main(){
    StaticCount s;
    s.increment();
    s.increment();
    s.increment();
    s.display();
    return 0;
}