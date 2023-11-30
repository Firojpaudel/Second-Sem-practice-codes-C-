// #include<iostream>
// #define pi 3.14159
// using namespace std;

// //Pure VF 
// class base{
//     public:
//     virtual double area() = 0;
// };

// class circle: public base{
//     double r;
//     public:
//     circle(double value) {
//         r = value;
//     }

//     double area(){
//         return pi*r*r;
//     }
// };

// int main (){
//     circle c(4.0);
//     cout<<"the area is =: "<<c.area();
//     return 0;
// }

/*
friend class_name function( class_name obj); == friend function syntax 
friend class class_name; == friend class syntax
*/

//this-pointer:

#include<iostream>
using namespace std;

class Distance {
    float x;

public:
    void setX(float inch) {
        this->x = inch;
    }

    void display() {
        cout << x;
    }
};

int main() {
    Distance d1;
    d1.setX(1.0);
    d1.display();
    return 0;
}
