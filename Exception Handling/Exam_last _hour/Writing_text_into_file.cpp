#include<iostream>
#include<fstream>
using namespace std;

// //method 1 :
// //Creating Object and inserting text file directly in it.
// int main(){
//     ofstream text("Trial1(using_obj).txt", ios::out);
//     text<<"Using Object"<<endl;
//     text.close();
// }

/*Note:
- ofstream text("textfile.txt")
is equivalent to :: 
- ofstream text;
- text.open("textfile.txt");
*/ 