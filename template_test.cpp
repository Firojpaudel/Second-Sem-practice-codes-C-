// #include<iostream>
// using namespace std;

// template <class T>
// T myMax(T a, T b) {
//     return (a > b ? a : b);
// }

// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout << "Max: " << myMax(a, b) << endl;
//     return 0;
// }


//template and function template::


#include <iostream>
#include<string.h>
using namespace std;

template <class T>
    T myMax (T a, T b){
        return (a>b?a:b);
    }
char *myMax(char *a, char *b){
    if (strcmp(a,b)>0){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a,b;
    cin >>a>>b;
    char c,d;
    cin>>c>>d;

    cout<<"The max number: "<<myMax(a,b)<<endl;
    cout<<"The max character: "<<myMax(c,d);

    return 0;
}
