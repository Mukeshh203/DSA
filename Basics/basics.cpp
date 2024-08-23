#include<iostream>
using namespace std;

int main(){
    
    // -------use of getline--------- 
    // string myString;
    // getline(cin, myString);
    // cout<<" This is "<< myString;
    // return 0;
    // --------------x------------------

    // ---------use of conditional statements----------

    int marks;
    
    cin >> marks;

    if(marks<25){
        cout<<"F";
    }
        else if(marks<45){
            cout<< "E";
        }
        else if(marks<49){
            cout<< "D";
        }
        else if(marks<59){
            cout<< "C";
        }
        else if(marks<79){
            cout<< "B";
        }
        else if(marks<100){
            cout<< "A";
        }
        return 0;
}