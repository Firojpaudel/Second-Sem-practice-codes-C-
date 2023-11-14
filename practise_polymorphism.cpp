// //Polymorphism 
// #include<iostream>
// using namespace std;

// class A {
//    public:
//         virtual void show(){
//             cout<<"Class A";
//         }
// };

// class B: public A {
//     public:
//         void show(){
//             cout<<"This is class B";
//         }
// };

// class C: public A {
//     public:
//         void show(){
//             cout<<"This is class C";
//         }
// };

// int main (){
//     A *p, a;
//     B b;
//     C c;
//     p = &b;
//     p -> show();
//     p = &c;
//     p-> show();
//     p = &a;
//     p-> show();
// }

// Abstract classes and pure virtual functions
/*
Theory :
    Abstract class: 
        - Not used to create objects.
        - Acts as a base class to be inherited by other classes.
        - How to make one? :
            > By placing at least one pure virtual function in the base class.
    Pure Virtual Function: 
        - The one with expression "=0" added to the declaration - that is, "a function declared in a base class that has no definition relative to the base class."
        - In such cases, the compiler requires each derived class to define the function or redeclare it as a pure virtual function. 
        For example: 
*/
//code: 
#include<iostream>
using namespace std;

class A{
    protected:
        int data;
    public:
        // Function declare:
        A(int d){
            data= d;
        }
        //pure virtual function:
        virtual void show() = 0;
};

class B: public A {
    public: 
        B(int d): A(d){

        }

        void show(){
            cout<<data<<endl;
        }
};

class C: public A {
    public:
        C(int d): A(d){}
        void show(){
            cout<<data<<endl;
    }
};

int main(){
    A *a; 
    B b(5);
    C c(6);
    a= &b;
    a -> show();
    a= &c;  
    a -> show();  
}
//answer to qn : What happens when A a; is used::
/*In your code, A is an abstract base class because it contains a pure virtual function show(). In C++, you cannot create an instance of an abstract class.

The line A *a; is not creating an instance of A, but a pointer to an A object. This is allowed and is a common practice when dealing with polymorphism. The pointer a can point to any object of a class derived from A.

However, if you tried to declare an instance of A like this: A a;, it would cause a compile-time error because A is an abstract class.*/