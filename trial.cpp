// // Example for writing to a disk file 
// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     ofstream outf;
//     outf.open("trial.txt");
//     outf<<"File demonstration program \n";
//     outf<<"These are written into the file.";
// }

// //Writing data to a file 
// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
// char ch='c';
// int i= 70;
// float f = 6.5;
// char *str="Patan";
// ofstream fout("Test.data");
// fout<<ch<<' '<<' '<<f<<' '<<str;
// cout<<"Data written to file\n";
// }

//Reading text from a file 
#include<iostream>
#include<fstream>
using namespace std;

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    const int LEN = 100;
    char text[LEN]; //for buffer
    ifstream infile("trial.txt");
    while(!infile.eof())
    {
        infile.getline(text,LEN); // read a line of text
        cout<<endl<<text; //display line of text
    }
}