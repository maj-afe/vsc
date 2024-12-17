#include<iostream>
using namespace std;
int add(int a, int b){
    return(a+b);
}
int add(int a, int b, int c){
    return(a+b+c);
}
float vol(double r, float h){
    return(3.14 * r * r * h); 
}
float vol(float l, float b,float h){
    return(l * b * h);
}
int main(){
cout<<"sum of 1, 2 is "<<add(1 ,2 )<<endl;
cout<<"sum of 1, 2, 3 is "<<add(1 ,2, 3 )<<endl;
cout<<"sum of 9, 2 is "<<add(9 ,2)<<endl;
cout<<"sum of 9, 2, 3 is "<<add(9 ,2, 3 )<<endl;
return 0;
}