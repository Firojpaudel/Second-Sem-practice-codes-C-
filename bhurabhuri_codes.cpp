/*Do Not Change*/
#include <iostream>
using namespace std;


/*Change from here onwards*/
// //PASS BY VALUE:
// void reverse (int a, int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }

// int main(){
//     int x =6,y =0;
//     reverse(x,y);
//     cout<<"x ="<<x<<endl;
//     cout<<"y ="<<y<<endl;
//     return 0;
// }

// //PASS BY REFERENCE:
// void reverse (int &a, int &b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }

// int main(){
//     int x =6,y =0;
//     reverse(x,y);
//     cout<<"x ="<<x<<endl;
//     cout<<"y ="<<y<<endl;
//     return 0;
// }

//PASS BY POINTERS:
void reverse (int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int x =6,y =0;
    reverse(&x,&y);
    cout<<"x ="<<x<<endl;
    cout<<"y ="<<y<<endl;
    return 0;
}
