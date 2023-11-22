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

