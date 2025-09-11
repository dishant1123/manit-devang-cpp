/*
run time polymorphism : 
1. virtual  function  : 
*/

/*
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
    dog d1;     // d1,c1 ==> obj 
    cat c1;

    a1= &d1;    // 
    a1->sound(); 

    a1=&c1; 
    a1->sound();
    return 0;
}
*/
/*
1.A virtual function in the base class that you expect to be overridden in derived classes.
2.Declared using the keyword virtual in the base class.
3. When you call a virtual function through a base class pointer/reference, the derived class’s version is executed (if it exists).
4 .This enables Run-time Polymorphism (also called Dynamic Dispatch).
*/


// bank  : 

#include<iostream>
using namespace std;
class bank 
{
    protected :
        string acc_holder_name; 
        int balance; 
    public : 
        bank(string acc_holder_name,int balance)
        {
            this->acc_holder_name=acc_holder_name;
            this->balance=balance;
        }
    virtual void display_acc_info()
    {
        cout<<"acc holder name : "<<acc_holder_name<<endl;
        cout<<"balance : "<<balance<<endl;
    }
    virtual void interest()
    {
        cout<<"interest is not  being calculated for normal account."<<endl;
    }
};

class savings : public bank 
{
    public : 
        double  int_rate ;

    savings(string acc_holder_name, int balance ,int int_rate) : bank(acc_holder_name,balance)
    {
        this->int_rate=int_rate;
    }

    void display_acc_info() override
    {
        cout<<"SAVING ACC INFO"<<endl;
        cout<<"acc holder name : "<<acc_holder_name<<endl;
        cout<<"balance : "<<balance<<endl;
        cout<<"interest rate : "<<int_rate<<endl;
    }
    void interest() override
    {
        double int_amt=balance*int_rate/100;
        cout<<"interest amount : "<<int_amt<<endl;
    }
};
class current : public bank
{
    public : 
        int over_draft ;

    current(string acc_holder_name, int balance ,int over_draft) : bank(acc_holder_name,balance)
    {
        this->over_draft=over_draft;
    }

    void display_acc_info() override
    {
        cout<<"CURRENT ACC INFO"<<endl;
        cout<<"acc holder name : "<<acc_holder_name<<endl;
        cout<<"balance : "<<balance<<endl;
        cout<<"overdraft : "<<over_draft<<endl;
    }
    void interest() override
    {
        cout<<"interest is not  being calculated for current account."<<endl;
    }
};
int main()
{
    bank* b1; 

    savings s1("prince",25000,8); 
    current c1("raj",35000,5000); 

    b1 =&s1; 
    b1->display_acc_info();  // saving 
    b1->interest();

    b1 =&c1;
    b1->display_acc_info();

    return 0;
}