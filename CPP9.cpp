#include<iostream>

using namespace std;

int main(){

int exp;
float num1, num2;
cout<<"enter number\n (1.)for Division\n \n(2.)for Multiplication\n \n(3.)Addition\n \n(4.)for Substraction\n  "<<endl;
cin>>exp;
cout<<"enter First number"<<endl;
cin>>num1;
cout<<"enter Second number"<<endl;
cin>>num2;

/*if((num<18)&&(num>0))
{
    cout<<"No comment"<<endl;
}
else{
cout<<"Adulthood"<<endl;
}*/
switch (exp)
{
case 1:

    cout<<"\nThe remainder is\n"<<float(num1 / num2)<<"\nthe quotient is\n"<<((int)num1 % (int)num2)<<endl;
    break;
case 2:

    cout<<"\nThe product is\n"<<float(num1*num2)<<endl;
    break;
case 3:

    cout<<"\nThe addition is\n"<<float(num1+num2)<<endl;
    break;
case 4:
    
    cout<<"\nThe diffrence is\n"<<float(num1-num2)<<endl;  
    break;
default:
    break;
}
}