#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    const int a = 34, b = 12, c = 1324; 
    cout<<"\n No SetW"<<a;
    cout<<"\n No SetW"<<b;
    cout<<"\n No SetW"<<c;
    cout<<"\n "<<setw(5)<<a;
    cout<<"\n "<<setw(5)<<b;
    cout<<"\n "<<setw(5)<<c;
    
    return 0;   
}