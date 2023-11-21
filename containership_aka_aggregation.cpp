//Explanation with code:
#include<iostream>
using namespace std;

class Student{ 
    protected:
        char name[20];
        int sid;
    public:
        void get(){
            cout<<"Enter student id and name: "<<endl;
            cin>>sid>>name;
        }
        void show(){
            cout<<"S_ID:: "<<sid<<endl;
            cout<<"name:: "<<name<<endl;
        }
};

class College{
        int cid;
        char cname[20];
        Student s; //Containership
    public:
        void get(){
            cout<<"Enter college's id and name: "<<endl;
            cin>>cid>>cname;
            s.get();
        }
        void show(){
            cout<<"C_ID:: "<<cid<<endl;
            cout<<"College name:: "<<cname<<endl;
            s.show();
        }
};

int main(){
    College c;
    c.get();
    cout<<"------College Details-------"<<endl;
    c.show();
    return 0;
}