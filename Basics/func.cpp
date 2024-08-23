#include<iostream>
using namespace std;


// ---------- print name---------
// void printName(string name) {
//     cout<<"hey "<< name;
// }

// int main(){
//  string name;
//  cin>>name;
//  printName(name);
//  return 0;
// }
// -------------------------xxxx-----------------




// ------------- sum of two integers-----------
// int sum(int a,int b){
//     return a+b;

// }

// int main(){

//     int a,b;
//     cin>> a >> b;
//     cout<<"sum of a + b is "<< sum(a,b);
//     return 0; 
// }
// -----------------xxxxxxxxxx-----------------


int main(){
    int i;
    int j;

    for(i=0; i<=5; i++){
        for(j=0; j<=i; j++){
            cout<< "*";

        }
        cout<< endl;
    }
    return 0;
}
