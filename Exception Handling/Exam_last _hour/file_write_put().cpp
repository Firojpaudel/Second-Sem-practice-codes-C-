#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
    char str[] ="Hello There";
    ofstream w("Puts.txt");
    for (int i=0; i<strlen(str); i++){
        w.put(str[i]);
    }
    w.close();
}