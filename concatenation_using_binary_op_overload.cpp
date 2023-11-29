//Concat strings using + operator :
#include <iostream>
#include<string>
using namespace std;

class cncat{
    string s;
    public:
    cncat(){};
    cncat(string str){
        s= str;
    }
    void display(){
        cout<< s<<endl;
    }
    cncat operator + (cncat s2){
      return cncat(s+s2.s);
    }
};

int main (){
    cncat c1, c2, c3;
    c1= cncat("Hello ");
    c2= cncat("World!");
    c3 = c1+c2;
    c3.display();
    return 0;
}