// #include<iostream>
// using namespace std;
// /*Here we have selected N number of characters and let C is the character to be repeated*/
// void rep (int N =12,char C= 'a'){
//     // default arg N and C with values 12 and 'a' respectively.
//     for (int i= 0; i<N; i++){
//         cout<<C;
//     }
// }

// int main(){
//     int n;
//     char c;
//     cout<<"Enter the number till which character gets repeated: ";
//     cin>>n;
//     cout<<"Enter the character to repeat: ";
//     cin>>c;
//     rep(n,c); 
//     cout<<endl;
//     rep();
//     return 0; 
// }



/*
Dynamic Memory Allocation: new[], del[]
new[] -> new file  creation
del[] -> tyehi file hatauxa 
*/

/*
syntax: 
    int* p;
    p = new int[num]
*/

// #include <iostream>
// using namespace std;

// int main() {
//     // Dynamic allocation of an integer array of size 5
//     int* dynamicArray = new int[5];

//     // Fill the array with values
//     for (int i = 0; i < 5; ++i) {
//         dynamicArray[i] = i * 2;
//     }

//     // Print the array
//     cout << "Array elements: ";
//     for (int i = 0; i < 5; ++i) {
//         cout << dynamicArray[i] << " ";
//     }
//     cout << endl;

//     // Free the dynamically allocated memory
//     delete[] dynamicArray;

//     return 0;
// }



#include<iostream>
using namespace std;
class Staff{
    int code;
    string name;
public:
    void getdata(){
        cout << "Enter Staff Code: ";
        cin >> code;
        cout << "Enter Name: ";
        cin >> name;
    }
    void showdata(){
        cout << "Code : " << code << endl;
        cout << "Name : " << name << endl;
    }
};
class Teacher:public Staff{
    string subject;
    int salary;
public:
    void getdata(){
        Staff :: getdata();
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void showdata(){
        Staff :: showdata();
        cout << "Subject : " << subject << endl;
        cout << "Salary : " << salary << endl;
    }
};
class Typist:public Staff{
    int speed;
public:
    void getdata(){
        Staff :: getdata();
        cout << "Enter Speed: ";
        cin >> speed;
    }
     void showdata(){
        Staff :: showdata();
        cout << "Speed: " << speed << endl;
    }
};
int main(){
    Teacher t1;
    Typist t2;
    t1.getdata();
    t2.getdata();

    cout << "Teacher Details" << endl;
    cout << "-------------" << endl;
    t1.showdata();

    cout << "Typist Details" << endl;
    cout << "-------------" << endl;
    t2.showdata();
    return 0;
}
