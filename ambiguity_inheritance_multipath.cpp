// Done with multiple on prev. 

//Now for Multipath inheritance, middle class (direct base class) should be made virtual. So that child class can directly access grandparent class

/*
Example:
    class A {  //Grandparent class (indirect base class)
        ...
    };

    class B : virtual public A{ //Virtual class (direct base class)
        ...
    };

    class C : virtual public A{ //Virtual class (direct base class)
        ...
    };

    class D : public B, public C { //Child class 
        ...
    };
*/

//code :

//Virtual Base Class::

#include<iostream>
using namespace std;

class Person {
    protected:
        char name[20];
        int age;
    public:
        void getdata(){
            cout<<"Enter name and age:"<<endl;
            cin>>name>>age;
        }
        void display(){
            cout<<"Name::"<<name<<endl;
            cout<<"Age::"<<age<<endl;
        }
};

class Employee: virtual public Person{
    protected:
        int eid, salary;
    public:
        void getdata(){
            cout<<"Enter Employee ID and Salary: "<<endl;
            cin>>eid>>salary;
        }
        void display(){
            cout<<"E_id::"<<eid<<endl;
            cout<<"Salary::"<<salary<<endl;
        }
};

class Student: virtual public Person{
    protected:
        int sid;
        char faculty[50];
    public:
        void getdata(){
            cout<<"Enter Student's Id and Faculty: "<<endl;
            cin>>sid>>faculty;
        }
        void display(){
            cout<<"S_ID::"<<sid<<endl;
            cout<<"Faculty::"<<faculty<<endl;
        }
};

class TA: public Student, public Employee {
    protected:
        char course[20];
    public:
        void getdata(){
            Person::getdata();
            Employee::getdata();
            Student::getdata();
            cout<<"Enter Course: "<<endl;
            cin>>course;
        }
        void display(){
            Person::display();
            Employee::display();
            Student::display();
            cout<<"Course:: "<<course;
        }
};

int main(){
    TA t;
    t.getdata();
    cout<<"-------TA details: --------"<<endl;
    t.display();
    return 0;
}