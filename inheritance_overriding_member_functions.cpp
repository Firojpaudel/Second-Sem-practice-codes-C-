#include<iostream>
using namespace std;

class A{
    public:
        void show(){
            cout<<"This is class A"<<endl;
        }
};

class B: public A{
    public:
        void show(){ //Same function name:: overriding
            cout<<"This is class B"<<endl;
        }
};

int main(){
    B b; //creating object of class B
    b.show();
    b.A::show(); //accessing class A by overriding
    return 0;
}