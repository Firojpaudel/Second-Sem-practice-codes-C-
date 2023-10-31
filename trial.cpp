// Example for writing to a disk file 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outf;
    outf.open("trial.txt");
    outf<<"File demonstration program \n";
    outf<<"These are written into the file.";
}
