//Derived class Constructor
#include<iostream>
using namespace std;

class A{
    protected:
        int adata;
    public:
        A(int a){
            adata = a;
        }
};

class B: public A{
    int bdata;
    public:
        B(int a, int b): A(a){
            bdata = b;
        }

        void showdata(){
            cout<<"adata="<<adata<<endl<<"bdata="<<bdata<<endl;
        }
};

int main(){
    B b(5,6);
    b.showdata();
    return 0;
}

//Next Example:

#include<iostream>
using namespace std;

class A{ //Base Class
    protected:
        int count;
    public:
        A(){ //zero Arguement Constructor : NO derived class constructor needed
            count= 0;
        }
        A(int a){ //Constructor with arguement : Derived class Constructor required
            count = a;
        }
        void display(){
            cout<<"count: "<<count<<endl;
        }
        void operator ++(){
            count++;
        }
};

class B: public A{
    public:
        B():A(){} //Explicit type invocation
        B(int b): A(b){ //Derived Class Constructor
            count =b;
        }
        void operator --() {
            count--;
        }
};

int main(){
    B i1;
    B i2(200);
    ++i1;
    ++i1;
    i1.display();
    --i2;
    i2.display();
    return 0;
}
