#include<iostream>
using namespace std;

template <class T>
    class mypair{
        T a,b;
        public:
        mypair(T first, T second){
            a= first;
            b= second;
        }
        T getmax(){
            T rval;
            rval = a>b?a:b;
            return rval;
        }
    };

    int main (){
        mypair <int>obj1(100,2);
        cout<<"Largest="<<obj1.getmax();
    }