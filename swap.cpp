#include<iostream>
using namespace std;

int main(){
    int a=7,b=5;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"a: "<<a<<", b: "<<b;
}