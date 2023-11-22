/*
Notes before starting code::
    - Overloading "<<" (insertion) and ">>" (extraction) is done on user defined functions.
     -- cout and cin are used only for predefined function (until overloading). 
    - Overloaded functions must be friend functions. 
*/

// Example Code:

#include<iostream>
using namespace std;

class stu{
        int id;
        char name[20];
    public:
        friend void operator >> (istream &in, stu &s){
            cout << "Enter student's id and name: "<<endl;
            in >> s.id>> s.name;
        }

        friend void operator << (ostream &out, stu &s){
            cout<<"Student id: "<<s.id<<endl;
            cout<<"Student name: "<<s.name<<endl;
        }
};

int main(){
    stu s;
    cin >> s;
    cout << s;
    return 0;
}

/*
Reason for going for global or friend function approach:
    1. Symmetry and Consistency:
    - If we overload "<<" and ">>" as member functions, their usage becomes unsymmetrical and might be confusing.
      For instance, if "<<" is a member function of a class called Myclass, using it would look like:
                Myclass obj;
                obj << cout; // Looks inconsistent and unsual
      Whereas, if we overload them globally or as a friend function, we get consistent syntax for both input and output operations.
                Myclass obj;
                cout << obj;
    2. Improved Encapsulation:
    - Allows functions to access private and protected members of a class, which is not possible for member functions.
    3. Support for implicit Conversions:
    - Classes can suppport implicit conversions more naturally. Can use << and >> without any explicit conversions. 
*/