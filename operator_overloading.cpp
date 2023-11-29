#include<iostream>
using namespace std;

class Counter{
    private:
    int a;
    public:
    Counter(){a=0;} //constructor
    int getcount(){
        return a;
    }

    void operator ++(){
        a++;
    }
};

int main(){
    Counter obj;
    cout<<obj.getcount()<<endl;
    ++obj;
    ++obj;
    cout<<obj.getcount()<<endl;
}