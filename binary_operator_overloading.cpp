#include<iostream>
using namespace std;

class complex{
    float r, i;
    public:
    complex(){}
    complex(float real, float imaginary){
        r=real;
        i= imaginary;
    }
    void display(){
        cout<<"("<<r<<"+ i"<<i<<")";
    }
    complex operator +(complex c){
        complex temp;
        temp.r= r+ c.r;
        temp.i= i+ c.i;
        return temp;
    }
};
int main(){
    complex c1, c2, c3;
    c1= complex(1.0,34.4);
    c2= complex(1.2,9.8);
    c3= c1+c2;
    c1.display();
    cout<<"+";
    c2.display();
    cout<<"=";
    c3.display();
    return 0;
}



