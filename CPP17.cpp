#include<iostream>
using namespace std;
//not recomended to use inline and static together
inline int pdt(int a, int b){
    static int d=0;
    return a*b;
} 

float cash(int now, float factor=1.05){
    return now*factor;
}

int main(){
int a, b, amm;
cout<<"enter value"<<endl;
cin>>a>>b;
cout<<"the pdt is"<<pdt(a,b)<<endl<<"enter balance"<<endl; 
cin>>amm;
cout<<"if you have"<<amm<<"as your balance your ammount"<<cash(amm)<<endl;
return 0;
}