#include<iostream>
using namespace std;

int main()
{
    int a=5, b=10;

    cout<<"Operators in C++"<<endl;
    cout<<"Types of Operators"<<endl;
    cout<<"1. Arithematic Operators"<<endl;
    cout<<"\nThe value of B + A is "<<b+a;
    cout<<"\nThe value of B - A is "<<b-a;
    cout<<"\nThe value of B * A is "<<b*a;
    cout<<"\nThe value of B / A is "<<b/a;
    cout<<"\nThe value of B % A is "<<b%a;
    cout<<"\nThe value of A++ is "<<a++<<endl;
    cout<<"The value of ++A is "<<++a<<endl;
    cout<<"The value of A-- is "<<a--<<endl;
    cout<<"The value of --A is "<<--a<<endl;
    cout<<endl;
    
    
    cout<<"2. Assignment Operator"<<endl;
    cout<<"Used to assign values"<<endl;
    cout<<endl;
    
    cout<<"3.Comparison Operator"<<endl;
    cout<<"The value of B == A is "<<(b==a)<<endl;
    cout<<"The value of B != A is "<<(b!=a)<<endl;
    cout<<"The value of B >= A is "<<(b>=a)<<endl;
    cout<<"The value of B <= A is "<<(b<=a)<<endl;
    cout<<"The value of B < A is "<<(b>a)<<endl;
    cout<<"The value of B > A is "<<(b<a)<<endl;
    cout<<endl;

    cout<<"4. Logical Operators"<<endl;
    cout<<"The value of Logical AND operator is "<<((b==a) && (b<a))<<endl;
    cout<<"The value of Logical OR opetrator is "<<((b==a) || (b>a))<<endl;
    cout<<"The value of Logical NOT opetrator is "<<(!(b==a))<<endl;
    cout<<endl;
    return 0;   
}