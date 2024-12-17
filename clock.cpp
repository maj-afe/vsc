#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cout<<"enter current time in 12 hours format as hour(HH), minute(MM) "<<endl;
    cin>>a>>b;
    if (a=12)
    {
     a=0;b=0;   
    while (a<12)
    {
        b++;cout<<a<<"\t"<<b<<endl;a++;
    }
    }
    
    
    
    
    
return 0;
}