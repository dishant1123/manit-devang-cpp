/*
abstration  : it is  the  process  of  hiding  the  details  of  an  object  and  exposing  only  the  functionality  that  is  relevant  to  the  users  of  that  object.

pure virtual function  : 
*/
/*
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
*/

// bank  : 

#include<iostream>
using namespace std;
class bank 
{
    public : 
        virtual void  deposit(int amt)=0;
        virtual void  withdraw(int amt)=0;
        virtual void  displaybalance()=0;
};

class savings : public bank 
{
    private : 
        int balance; 
    public : 
        savings(int balance)
        {
            this->balance=balance;
        }
        void deposit(int amt) override
        {
            balance=balance+amt;
            cout<<"deposited amount : "<<amt<<endl;
        }
        void withdraw(int amt) override
        {
            balance=balance-amt;
            cout<<"withdrawed amount : "<<amt<<endl;
        }
        void displaybalance() override
        {
            cout<<"balance : "<<balance<<endl;
        }
};
class current : public bank 
{
    private : 
        int balance; 
    public :
        current(int balance)
        {
            this->balance=balance;
        }
        void deposit(int amt) override
        {
            balance=balance+amt;
            cout<<"deposited amount : "<<amt<<endl;
        }
        void withdraw(int amt) override
        {
            if (balance -amt >10000) 
            {
                balance=balance-amt;
                cout<<"withdrawed amount : "<<amt<<endl;
            }
            else 
            {
                cout<<"min balance is 10000"<<endl;
            }
        }
        void displaybalance() override
        {
            cout<<"balance : "<<balance<<endl;
        }
};

int main()
{
    bank *b; 

    savings s1(10000);
    current c1(20000); 

    cout<<"savings account "<<endl;
    b=&s1; 
    b->deposit(1000);
    b->withdraw(500);
    b->displaybalance();

    cout<<endl;
    cout<<"current account "<<endl;
    b=&c1;
    b->deposit(1000);
    b->withdraw(500);
    b->displaybalance();
     return 0; 

}