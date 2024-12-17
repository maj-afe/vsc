#include<iostream>
using namespace std;
int fact(int n){
    if (n <= 1){return 1;}
    return n * fact(n-1);
}
int fib(int m){
    
}
int main(){
    int a, b;
    cout<<"enter number"<<endl;
    cin>>a;
    switch (b)
    {
    case 1:
        cout<<"factorial is "<<fact(a)<<endl;
        break;
    
    case 2:
        cout<<"series till "<<a<<" is "<<fib(a)<<endl;
        break;
    default:
        break;
    }
    
return 0;
}