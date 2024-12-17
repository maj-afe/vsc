#include<iostream>

using namespace std;

int main(){
    int a=5;
    int* b;
    b=&a;
    cout<<"the address of a is"<<b<<endl;// & --> is (Address of) operator
    cout<<"the value at address of a is"<<*b<<endl;// * --> is (value at) Dereference operator
    return 0;

}