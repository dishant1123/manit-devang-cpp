/*
friend  funcion  : it is  not member  of call but access private  and  protected member. 

declare ==> with in  class  
friend  ==> keyword 
*/
#include <iostream>
using namespace std;
class box 
{
    private  :  
        int length; 
    
    public : 
        box(int l)
        {
            length =l; 
        }
    friend void display(box b); //==> declare ==> box class name  ==> b object 
};
void  display(box b)  // friend  function  intialization 
{
    cout<<"box length is "<<b.length<<endl;
}
int main()
{
    box b(10); 
    display(b);
    return 0; 
}