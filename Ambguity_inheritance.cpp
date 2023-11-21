//How Ambiguity occours and method to remove them in inheritance 
//Occours in:: Multiple and multipath inheritance 

//Code Example::
//For Multiple :) 
#include<iostream>
using namespace std;

class A{ //base class 
    public:
        void show(){
            cout<<"Class:A"<<endl;
        }
};

class B{ //base class 
    public:
        void show(){
            cout<<"Class:B"<<endl;
        }
};

class C : public A, public B{ //derived class

};

int main(){
    C x;
    //x.show(); Ambiguity Error
    //Solving using => x.(class)::(method);
    x.A::show();
    x.B::show();
    return 0;
}