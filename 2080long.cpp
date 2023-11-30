#include<iostream>
using namespace std;
/*Here we have selected N number of characters and let C is the character to be repeated*/
void rep (int N =12,char C= 'a'){
    // default arg N and C with values 12 and 'a' respectively.
    for (int i= 0; i<N; i++){
        cout<<C;
    }
}

int main(){
    int n;
    char c;
    cout<<"Enter the number till which character gets repeated: ";
    cin>>n;
    cout<<"Enter the character to repeat: ";
    cin>>c;
    rep(n,c); 
    cout<<endl;
    rep();
    return 0; 
}