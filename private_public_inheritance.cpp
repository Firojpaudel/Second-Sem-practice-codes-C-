#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        int b;
    protected:
        int c;
};

class B: public  A{ //accessing base class publicly
    // a is not accessible
    // b is public
    // c is protected
    public:
        void fun(){
            int data;
            //data= a; //error not accessible
            data =b ; //ok
            data= c; //ok
        }
};

class C: private A{ //accessing the base class privately
    public:
        void fun(){
            int data;
            //data= a; //error not accessible
            data =b ; //ok
            data= c; //ok
        }
};

int main()
{
    int a;
    B obj;
    //obj.a; //error not accessible
    a= obj.b; //ok
    //obj.c; //error not accessible

    C obj1;
    //obj1.a; //error not accessible
    //obj1.b; //error not accessible
    //obj1.c; //error not accessible
    return 0;
}
