#include<iostream>
using namespace std;

class base1{
    public:
        base1(){
            cout<<"No arg in base1"<<endl;
        }
};

class base2{
    public:
        base2(){
            cout<<"No arg constructor in base2"<<endl;
        }
};

class derived: public base1, public base2{
    public:
        derived(): base2(), base1(){ //Explicit Calling 
            cout<<"No arg constructor in derived class"<<endl;
        } 
};

int main(){
    derived obj;
}
