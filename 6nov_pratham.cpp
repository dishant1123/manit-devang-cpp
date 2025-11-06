/*
abstraction  : it is  the  process  of  hiding  the  details  of  an  object  and  exposing  only  what  is  necessary  for  the  users  to  use. 

pure  virtual  function  :  it  is  a  function  that  is  declared  in  the  base  class  and  does  not  have  a  definition  in  the  derived  class.

*/

#include <iostream>
using namespace std;
class shape
{
    public : 
        virtual void  area()=0; // pure virtual function  
};

class circle : public shape 
{
    float radius; 
    public : 
        circle(float r)
        {
            radius =r;
        }
        void area() override
        {
            cout<<" area of circle is : "<<(22/7)*radius*radius<<endl;
        }
};
class rectangle : public shape 
{
    float length, breadth; 
    public :
        rectangle(float l, float b)
        {
            length =l;
            breadth =b;
        }
    void area() override
    {
        cout<<" area of rectangle is : "<<length*breadth<<endl;
    }
};
int main()
{
    shape *s; 

    circle c(8);
    rectangle r(5,4); 

    s=&c;  // circle 
    s->area(); 

    s=&r;  // rectangle
    s->area();
    return 0;

}