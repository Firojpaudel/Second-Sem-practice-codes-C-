#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //Writing
    fstream obj1("district.txt", ios::out);
    obj1<<"Kathmandu";
    obj1.close();

    fstream obj2("headqtr", ios::out);
    obj2<<"KTM";
    obj2.close();
    //Reading
    fstream obj3("district.txt", ios::in);
    char c;
    cout<<"District: ";
    while (obj3.get(c)){
        cout<<c;
    }
    obj3.close();

    fstream obj4("headqtr", ios::in);
    char c2;
    cout<<"\nHeadquarter: ";
    while(obj4.get(c2)){ // inorder to avoid last character repetition, we can use instead of !obj.eof()
        cout<<c2;
    }
    obj4.close();
}