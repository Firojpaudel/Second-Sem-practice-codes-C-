#include<iostream>
using namespace std;

class A { //base class 
    protected:
    int a;
    public:
    A (int x){
        a=x;
    }
};

class B  { //base
    protected:
    int b;
    public:
    B (int y){
        b=y;
    }
};

class C : public A,public B{  //derived
    private:
    int c;
    public:
    C(int x, int y, int z): A(x), B(y){
        c = z;
    }

    void showdata(){
        cout<<a<<b<<c;
    }
};

int main (){
    C c(1,2,3);
    c.showdata();
    return 0;
}


/*Copy CON :
    class A{
        private:
        public:
        A(A &t);
    };
*/