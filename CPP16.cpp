#include<iostream>
using namespace std;
void swapp(int* a, int* b){
    int temp = *a;
     *a = *b;
     *b = temp;

} 
int main(){
    int a = 5;
    int b = 7;
    swapp(&a,&b);
    cout<<"swaped\t"<<a<<endl;
    cout<<"swaped\t"<<b<<endl; 
}