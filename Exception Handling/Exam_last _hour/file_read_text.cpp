#include<iostream>
#include<fstream>
using namespace std;

int main (){
    fstream obj("Trial1(using_obj).txt", ios::in);
    char c;
    while (!obj.eof()){
        obj.get(c);
        cout<<c;
    }
    obj.close();
}
