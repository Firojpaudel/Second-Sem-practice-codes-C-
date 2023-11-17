// //Inhertance Notes with codes (2nd semester):
// /*
//     What is inhertance:
//     - It's like child inheriting features from its parents.
//     = Organizing info in hierarchical form. 
// */

// #include<iostream>
// using namespace std;

// class base{
//     //Base class members
//     public:
//     virtual void main(){
//         cout<<"This is base class";
//     }
// };

// class derived1: public base{ //derived class syntax 
//     public:
//         void main(){
//             cout<<"This is derived class";
//         }
// };

// int main (){
//     base *b;
//     derived1 d;
//     b = &d;
//     b -> main();
//     return 0;
// }


//an example of inheritance:
#include<iostream>
using namespace std;

class one{
    protected:
        int count;
    public:
        one(){
            count =0; //Zero arguement constructor 
        }

        void display(){
            cout<<"Count="<<count<<endl;
        }
        
        void operator ++ (){ // Unary Operator Overloading 
            count++;
        }
};

class two: public one {
    public:
        void operator --(){
            count--;
        }
};

int main (){
    two i;
    ++i;
    ++i;
    i.display();
    --i;
    i.display();
}
// Code Explanation:
/*
This C++ code demonstrates the concepts of inheritance, operator overloading, and the use of protected members.

    class one: This is the base class. It has a protected integer member count and a public zero-argument constructor that initializes count to 0. It also has a display method that prints the value of count, and an overloaded ++ operator that increments count.

    class two: This is a derived class that inherits from class one. It has an overloaded -- operator that decrements count.

    main function: An object i of class two is created. The ++ operator is used twice on i, which increments count (inherited from class one) twice, making its value 2. The display method is then called to print the value of count, which is 2. The -- operator is used on i, which decrements count to 1. The display method is called again to print the new value of count, which is 1.

The protected keyword in the base class one allows the derived class two to access the count member. Operator overloading allows operators to have user-defined meanings on user-defined types (like classes).
*/
//PS: 
/*
one j;
can't be used since derived class can access base class but base class can't access derived. Flow is unidirectional. 
*/

