/*
protected :  with in the class  and  the derived class
*/
#include<iostream>
using namespace std;
class base
{
    protected : 
        int a =100; 

    public : 
        void show()
        {
            cout<<"base class a  value is  : "<<a<<endl;
        }
};
class derived : public base 
{
    public : 
        void modify_x()
        {
            a =200;
            cout<<"derived class a  value is  : "<<a<<endl;
        }
};
int main()
{
    base b; 
    b.show();   // protected a = 100 

    derived d; 
    d.modify_x(); // pro ==> 200  

    d.show();  // base  method    a=200 
    return 0;
}