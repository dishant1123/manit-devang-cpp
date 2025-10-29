/*
polimorphism  : it allows the same function name or operator to behave differently depending  on the object or data type .

1. compile time  : 
2. run time :

*/

// function  overloading with diffrent  args and  compile time : 

/*
#include <iostream>
using namespace std;
class Print
{
    public : 
        void show(int a)
        {
            cout<<" int value is : "<<a<<endl;
        }
        void show(double a)
        {
            cout<<" double value is : "<<a<<endl;
        }
        void show(string a)
        {
            cout<<" string value is : "<<a<<endl;
        }
};
int main()
{
    Print p; 

    p.show(10);  // first  funcation call  
    p.show(10.89); // sec function call
    p.show("pratham"); // third function call
    return 0;
}
*/
/*
app : 

name  
age  
gender 
height   ==> 165 cm / 5 foot 2 inches  / 6 foot 

*/

// run time  polimorphism  :

#include <iostream>
using namespace std;
class animal 
{
    public : 
        virtual void sound()
        {
            cout<<" animal sound "<<endl;
        }
};
class dog : public animal
{
    public : 
        void sound()override
        {
            cout<<" dog sound "<<endl;
        }
};
class cat : public animal
{
    public : 
        void sound() override
        {
            cout<<" cat sound "<<endl;
        }
};
int main()
{
    animal *a;   // base  class pointer  ==> access cat dog   
    dog d ;
    cat c; 

    a= &d;
    a->sound();    //  ->  ==> arrow operator  use  only  virtual  function  

    a =&c; 
    a->sound();  // specific  class function  
    return 0;     
}


/*

int a =10 ; 
int *p ;    // pointer to declaration
p= &a   // pointer  intialization
 */