#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"This is a cons."<<endl;
    }
    ~A(){
        cout<<"Destructor called"<<endl;
        cout<<"Program exitted"<<endl;
    }
};

int main(){
    A a;
    cout<<"main terminating"<<endl;
    return 0; //this is exit call invokes ~A(){}
}

