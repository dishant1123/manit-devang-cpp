/*
1. method  over  loading  ==> complie  time  run  
    a. function over loading  
    b. constructor  over loading  
    c. operator  over loading 

2. method  over riding  ==> run time  
*/

#include<iostream>
using namespace std;
class animal 
{
    public : 
    virtual void make_sound()
    {
        cout<<"animal can sound.\n";
    }
};
class cat : public animal 
{
    public :
    void make_sound() override 
    {
        cout<<"cat can meow.\n";
    }
};
class dog : public animal 
{
    public :
    void  make_sound() override
    {
        cout<<"dog can bark.\n";
    }
}; 
int main()
{
    animal* a;  //base  
    dog d1; 
    cat c1;

    a=&d1; 
    a->make_sound();
    a=&c1; 
    a->make_sound();

    return 0;     

}

/*
int a =10 
int *p =&a   // pointer declare inti   
*/