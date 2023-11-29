#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int x= 5;
    char ch = 'a';
    float f= 3.4;
    fstream hello("Namaste.data", ios::out);
    hello<<x<<" "<<ch<<" "<<f<<" "<<"datas stored in data file";
    hello.close();
}