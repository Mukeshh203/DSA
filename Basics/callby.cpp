#include<iostream>

using namespace std;

void increment(int &a){

    a++;
    cout<<a<<endl;

}

int main(){

    int num = 5;
    increment(num);
    cout<<num<<endl;
    return 0;
}