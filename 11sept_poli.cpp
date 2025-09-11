/*
run time polymorphism : 

1. virtual  function  : 
*/

#include<iostream>
using namespace std;
class animal
{
    public : 
        virtual void sound()
        {
            cout<<"animal sound"<<endl;
        }
};

class dog : public animal 
{
    public :
    void  sound() override 
    {
        cout<<"dog sound"<<endl; // over ride the base class function  
    }
};

class cat : public animal 
{
    public :
    void sound() override
    {
        cout<<"cat sound"<<endl;
    }
};
int main()
{
    animal* a1; // base class pointer 
    dog d1;
    cat c1;

    a1= &d1;    // int w ,int  *a ; a =&w
    a1->sound(); 

    a1=&c1; 
    a1->sound();
    return 0;
}