#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream hey("Namaste.data", ios::in);
    float f;
    char c;
    int i;
    hey>>f>>c>>i;
    hey.close();
}