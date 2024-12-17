#include<iostream>

using namespace std;
int c = 100;

int main(){

int a, b, c;
    cout<<"Enter First value:\n";
    cin>>a;
    cout<<"Enter Second Value:\n";
    cin>>b;
    cout<<"The Sum is :"<<(float)(c=a+b)<<endl; 
    cout<<"The Global Value is : "<<::c<<endl; 
    
    float d=35.5;
    long double e =45.5;
    cout<<"The value of D is "<<d<<endl<<"The value of e is "<<e;
    
    float x=30;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    
    int g=33;
    float h=66.5;
    cout<<"a"<<float(g)<<endl;
    cout<<"b"<<int(h)<<endl;

    
    return 0;
}
    
