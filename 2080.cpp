// Write a CPP code to display the number of objects using static member. 
#include<iostream>
using namespace std;

class MyClass{
    private:
        static int count;
    public:
        //Constructor when object is created
        MyClass(){
            count++;
        }
        //Destructor when object is destroyed
        ~MyClass(){
            count--;
        }
        //Function to return count
        static int getCount(){
            return count;
        }
};
//Initialize static member
int MyClass::count = 0;

//Main function
int main (){
    //Create objects
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;
    MyClass obj4;
    MyClass obj5;
    //Display count
    cout << "Number of objects: " << MyClass::getCount() << endl;
    return 0;
    //output: Number of objects: 5
}


