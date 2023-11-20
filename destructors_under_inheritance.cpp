#include<iostream>
using namespace std;

class A{
    public:
        ~A(){
            cout<<"A is destructor"<<endl;
        }
};

class B : public A{
    public:
        ~B(){
            cout<<"B is destructor"<<endl;
        }
};

class C: public B{
    public:
        ~C(){
            cout<<"C is destructor"<<endl;
        }
};

int main(){
    C x;
    return 0;
}