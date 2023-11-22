// Exception Handling :: Try , Catch , Throw 

/* #include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"Enter values of a & b: \n";
    cin>>a>>b;

    try{
        if (b==0)
            throw b;
        else
            cout<<"Result:: "<<(float)a/b;
    }

    catch(int i){
        cout<<"Divide by zero exception: b= "<<i;
    }

    cout<<"\nEND"<<endl;
    return 0;
}
*/

//Second Example:

#include<iostream>
using namespace std;

void divide(int a, int b){
    if (b==0){
        throw b;
    }
    else{
        cout<<"Result: "<<(float)a/b<<endl;
    }
}

int main(){
    int m,n;
    cout<<"Enter the values m and n: "<<endl;
    cin>>m>>n;
    try{
        divide(m,n);
    }
    catch(int i){
        cout<<"Divide by zero error, n= "<<n<<endl;
    }
    cout<<"END\n";
}