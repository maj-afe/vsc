#include<iostream>

using namespace std;



int main(){

int exp, j = 0, i, exo, v;
float num1, num2;
cout<<"How many operations would you like to perform"<<endl;
cin>>i;

while (exp!=0 && j<i)
{
cout<<"enter number\n (1.)for simple calculations\n \n(2.)for area and volume calculations\n \n(3.)for upcoming funcions\n \n(4.)for upcoming features\n \n(0.)for Exit"<<endl;
cin>>exp;

switch (exp)
{
case 1:cout<<"How many operations would you like to perform"<<endl;
cin>>i;

while (exp!=0 && j<i)
{
cout<<"enter number\n (1.)for Division\n \n(2.)for Multiplication\n \n(3.)Addition\n \n(4.)for Substraction\n \n(0.)for Exit"<<endl;
cin>>exp;
    
    switch (exp)
{
case 1:

    cout<<"enter First number"<<endl;
    cin>>num1;
    cout<<"enter Second number"<<endl;
    cin>>num2;
    
    cout<<"\nThe remainder is\n"<<float(num1 / num2)<<"\nthe quotient is\n"<<((int)num1 % (int)num2)<<endl;
    break;
case 2:

    cout<<"enter First number"<<endl;
    cin>>num1;
    cout<<"enter Second number"<<endl;
    cin>>num2;

    cout<<"\nThe product is\n"<<float(num1*num2)<<endl;
    break;
case 3:

    cout<<"enter First number"<<endl;
    cin>>num1;
    cout<<"enter Second number"<<endl;
    cin>>num2;

    cout<<"\nThe addition is\n"<<float(num1+num2)<<endl;
    break;
case 4:
    
    cout<<"enter First number"<<endl;
    cin>>num1;
    cout<<"enter Second number"<<endl;
    cin>>num2;

    cout<<"\nThe diffrence is\n"<<float(num1-num2)<<endl;  
    break;
case 0:
exit;
default:
    break;
}
j++;
}
break;
case 2:
    cout<<"How many operations would you like to perform"<<endl;
    cin>>i;

while (exp!=0 && j<i)
{
cout<<"enter number\n (1.)for Division\n \n(2.)for Multiplication\n \n(3.)Addition\n \n(4.)for Substraction\n \n(0.)for Exit"<<endl;
cin>>exp;
    
    switch (exp)
{
case 1:

    cout<<"enter First number"<<endl;
    cin>>num1;
    cout<<"enter Second number"<<endl;
    cin>>num2;
    
    cout<<"\nThe remainder is\n"<<float(num1 / num2)<<"\nthe quotient is\n"<<((int)num1 % (int)num2)<<endl;
    break;
case 2:

    cout<<"enter First number"<<endl;
    cin>>num1;
    cout<<"enter Second number"<<endl;
    cin>>num2;

    cout<<"\nThe product is\n"<<float(num1*num2)<<endl;
    break;
case 3:

    cout<<"enter First number"<<endl;
    cin>>num1;
    cout<<"enter Second number"<<endl;
    cin>>num2;

    cout<<"\nThe addition is\n"<<float(num1+num2)<<endl;
    break;
case 4:
    
    cout<<"enter First number"<<endl;
    cin>>num1;
    cout<<"enter Second number"<<endl;
    cin>>num2;

    cout<<"\nThe diffrence is\n"<<float(num1-num2)<<endl;  
    break;
case 0:
exit;
default:
    break;
}
j++;
}
    break;
case 3:
cout<<"How many operations would you like to perform"<<endl;
cin>>i;

while (exp!=0 && j<i)
{
cout<<"enter number\n (1.)for Division\n \n(2.)for Multiplication\n \n(3.)Addition\n \n(4.)for Substraction\n \n(0.)for Exit"<<endl;
cin>>exp;
    
    switch (exp)
{
case 1:

    cout<<"enter First number"<<endl;
    cin>>num1;
    cout<<"enter Second number"<<endl;
    cin>>num2;
    
    cout<<"\nThe remainder is\n"<<float(num1 / num2)<<"\nthe quotient is\n"<<((int)num1 % (int)num2)<<endl;
    break;
case 2:

    cout<<"enter First number"<<endl;
    cin>>num1;
    cout<<"enter Second number"<<endl;
    cin>>num2;

    cout<<"\nThe product is\n"<<float(num1*num2)<<endl;
    break;
case 3:

    cout<<"enter First number"<<endl;
    cin>>num1;
    cout<<"enter Second number"<<endl;
    cin>>num2;

    cout<<"\nThe addition is\n"<<float(num1+num2)<<endl;
    break;
case 4:
    
    cout<<"enter First number"<<endl;
    cin>>num1;
    cout<<"enter Second number"<<endl;
    cin>>num2;

    cout<<"\nThe diffrence is\n"<<float(num1-num2)<<endl;  
    break;
case 0:
exit;
default:
    break;
}
j++;
}
break;
default:
    break;
}

j++;
}




return 0;
}