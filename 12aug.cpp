// array : 

#include<iostream>
using namespace std;
class array_handle
{
    public:
        int a[5];
    void scan()
    {   
        cout<<"enter the array element  : \n";
        int i; 
        for(i=0; i<5; i++)
        {
            cin>>a[i];
        }    
    }
    void print_array()
    {
        int i;
        cout<<"array is : "<<endl;
        for(i=0; i<5; i++)
        {
            cout<<a[i]<<"\n";
        }
    }
};
int main()
{
    array_handle a;
    a.scan();
    a.print_array();
    return 0;
}

// update  array  :
