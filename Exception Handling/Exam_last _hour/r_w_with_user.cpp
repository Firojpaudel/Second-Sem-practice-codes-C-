#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream obj1("Userinput", ios::out);
    cout<<"Enter name: ";
    char name[20];
    cin>>name;
    obj1<<name;
    obj1.close();

    fstream obj2("Userinput", ios::in);
    obj2>>name;
    cout<<"Hello "<<name<<" !";
    obj2.close();
}