//6. Define a class student and write a program to enter student details using constructor and
// define member function to display all the details.
#include<iostream>
using namespace std;

class student{
        int roll;
        string name;
        int age;
    public:
        student( int r,string n,int a){
            roll=r;
            name=n;
            age=a;
        }
        void display(){
            cout<<" student Name : " <<name<<endl<<"Roll no :"<<roll<<endl<<"age is"<<age<<endl;
        }
};
int main(){
    student s1=student(12,"Ankur",18);
    s1.display();
    return 0;
}