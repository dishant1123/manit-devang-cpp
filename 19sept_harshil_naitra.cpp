/*
abstraction  : 
means  only eassential detalis  and hiding the  implementation detalis  from user. 

1. abtract base class (with  pure virtual function)
2. interface (pure vitrtual function )

*/
// abstract base  class (with  pure virtual function) :

/*
#include<iostream>
using namespace std; 
class vehicle 
{
    public : 
        virtual void  start()=0; // pure virtual  function  
    
    void  fuel_type()
    {
        cout<<"fuel type : petrol/ diesel\n";
    }
};
class car : public vehicle 
{
    public : 
        void start() override
        {
            cout<<"car start\n";
        }
};
class bike : public vehicle 
{
    public : 
        void  start() override 
        {   
            cout<<"bike start\n";
        }
};

int main()
{
    //vehicle* v1 =new car(); 
    //vehicle *v1 =new car();
    //vehicle *v2 =new bike();

    vehicle *v1; 
    vehicle *v2; 

    car c1; 
    bike b1; 

    v1=&c1; 
    v2=&b1;

    v1->start();  // calls cars  implementation
    v1->fuel_type(); // calls  base  class method 

    v2->start();  // calls bikes  implementation
    v2->fuel_type(); // calls  base  class method

    return 0;
}
*/

// interface (pure vitrual function ) :

#include<iostream>
using namespace std;
class payment 
{
    public : 
        virtual void pay(int amt)=0; 
        virtual void  refund(int amt)=0; 

};
class credicard : public payment 
{
    public : 
        void pay(int amt) override 
        {
            cout<<"credit card pay : "<<amt<<"\n";
        }
        void refund(int amt) override
        {
            cout<<"credit card refund : "<<amt<<"\n";
        }
};
class UPI : public payment 
{
    public : 
        void pay(int amt) override 
        {
            cout<<"UPI pay : "<<amt<<"\n";
        }
        void refund(int amt) override
        {
            cout<<"UPI refund : "<<amt<<"\n";
        }
};

int main()
{
    payment *p1 = new credicard(); 
    payment *p2 = new UPI();
    
    p1->pay(10000); 
    p1->refund(500); 

    p2->pay(9000);
    p2->refund(200);
    return 0;

};