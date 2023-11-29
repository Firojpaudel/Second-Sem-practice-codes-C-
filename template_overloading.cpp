#include<iostream>
using namespace std;

template <class T>
    void print (T a){
        cout<<a<<endl;
    }

template <class T>
    void print (T a, int n){
        for (int i = 0; i<n; i++){
            cout<<a<<endl;
        }
    }

int main(){
    print(1);
    print("hello", 3);
    return 0;
}