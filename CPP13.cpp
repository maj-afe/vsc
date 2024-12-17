#include<iostream>

using namespace std;

int main()
{
    int i, j, k, l;
    cout<<"enter array size"<<endl;
    cin>>i;

    int arr[i];
    for ( j = 0; j < i; j++)
    {
        cout<<"enter element"<<endl;
        cin>>arr[j];
    }
    cout<<"entered elements are"<<endl;
    for ( j = 0; j < i; j++)
    {
        
        cout<<""<<arr[j]<<endl;
        
    }

    return 0;

}
