#include<iostream>
using namespace std;

class code{
    int id;
    public:
    code(){} //default constructor 
    code(int a){ //parameterized
        id =a;
    }
    code(code &x){ //refrence 
        id = x.id;
    }
    void display(){
        cout<<"the value :"<<id<<endl;
    }
};

int main (){
    code w1(12);
    code w2(w1);
    code w3=w2;
    code w4= w1;
    w1.display();
    w2.display();
    w3.display();
    w4.display();
    return 0 ;
}