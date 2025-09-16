/*
abstraction  : 

showing only essential information and hiding the  implementation  details .

1. abstract class with  pure virtual  function  
2.interfaces (pure abstract class )
*/

// abstract class with  pure  virtual function  : 
/*
#include<iostream>
using namespace std;
class vehicle 
{
    public : 
        virtual void  start()=0; // pure virtual function
    
    void  fuel_type()
    {
        cout<<"fuel type : petrol / diesel\n";
    }

};

class car :public vehicle 
{
    public : 
        void start() override 
        {
            cout<<"car start\n";
        }
}; 
int main()
{
    vehicle* v1 = new car();
    
    // car c1 ;   v1=&c1;
    v1->start();   // calls cars  implementation
    v1->fuel_type();// calls  base  class method
    return 0;

}
*/
// 2 .interfaces (pure abstract class ) :

#include<iostream>
using namespace std;
class payment 
{
    public : 
        virtual void  pay(int amt)=0;
        virtual void refund(int amt)=0;
};

class creditcard : public payment 
{
    void  pay(int amt) override 
    {
        cout<<"credit card pay : "<<amt<<"\n";
    }
    void  refund(int amt) override
    {
        cout<<"credit card refund : "<<amt<<"\n";
    }
};
class upi : public payment 
{
    void  pay(int amt) override
    {
        cout<<"upi pay : "<<amt<<"\n";
    }
    void  refund(int amt) override
    {
        cout<<"upi refund : "<<amt<<"\n";
    }
}; 
int main()
{
    payment* p1 =new creditcard();
    payment* p2 =new upi(); 

    p1->pay(1000);
    p1->refund(100); 

    p2->pay(9000);
    p2->refund(200);
    return 0;
}