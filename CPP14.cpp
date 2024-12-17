
#include<iostream>

using namespace std;
//typedef is used to change name of struct to which ever name you like.
typedef struct CPP14
    {
        int Id;
        char naame;
        float salary;
    } st;

union dsa
{
    int dr;
    char df;
    float hg;

};


int main(){
    union dsa a1;
    a1.df=31;
    cout<<""<<a1.df<<endl; 
   // struct CPP14 ram;
   // ram.Id=1;
   // ram.naame = 'd';
   // ram.salary=137805;
   // cout<<""<<ram.Id<<endl;
    //cout<<""<<ram.naame<<endl;
    //cout<<""<<ram.salary<<endl;
    
        
     
    return 0; 

}