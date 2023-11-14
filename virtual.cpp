//Demonstrate the use of virtual functions
#include <iostream>
using namespace std;

class base {
public:
    virtual void who() {
        cout << "Base\n";
    }
};

class one: public base {
public:
    void who() {
        cout << "one\n";
    }
};

class two: public base {
public:
    void who() {
        cout << "two\n";
    }
};

int main()
{
    base base_obj; //create objects of base class
    base *p; //create pointer to base class
    one one_obj; //create objects of derived class one
    two two_obj; //create objects of derived class two

    p = &base_obj; //put address of base in pointer
    p->who(); //access base's who

    p = &one_obj; //put address of one in pointer
    p->who(); //access one's who

    p = &two_obj; //put address of two in pointer
    p->who();//access two's who

    return 0;
}