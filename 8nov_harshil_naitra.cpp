/*
abstration  : it is  the  process  of  hiding  the  details  of  an  object  and  exposing  only  the  functionality  that  is  relevant  to  the  users  of  that  object.

pure virtual function  : 
*/

#include<iostream>
using namespace std; 
class shape
{
    public : 
        virtual  void area()=0; // pure virtual function 
        
};
class circle : public shape 
{
    private : 
        double radius;
    public :
        circle(double radius)
        {
            this->radius=radius;
        }
        void  area() override
        {
            cout<<"area of circle is : "<<3.14*radius*radius<<endl; // 22/7 
        }
};
class rectangle : public shape
{
    private :
        int  length,breadth;
    public :
        rectangle(int length,int breadth)
        {
            this->length=length;
            this->breadth=breadth;
        }
    void area() override 
    {
        cout<<"area of rectangle is : "<<length*breadth<<endl;
    }
};
int main()
{
    shape *s; 

    circle c1(5); 
    rectangle r1(10,35); 

    s=&c1;
    s->area(); 

    s=&r1; 
    s->area();

    return 0; 
}