/*
polymorphism  :
 many forms    ==> 
 it allows methods to do different things based on the object it is acting upon.

1. method  overloading  == >complie  time  
2. method  overriding   ==> run time  
 */

// compile time  polimorphism  : 

/*
#include<iostream>
using namespace std;
class calculator 
{
    public : 
        void  show(int a)
        {
            cout<<"show int value is  : "<<a<<endl;
        }
        void  show(float a)
        {
            cout<<"show float value is : "<<a<<endl;
        }
        void show(double a)
        {
            cout<<"show double value is : "<<a<<endl;
        }
        void show(string a)
        {
            cout<<"show string value is : "<<a<<endl;
        }
};

int main()
{
    calculator c1; 

    c1.show(10);   // int  
    c1.show(12.45); // float 
    c1.show(123456);   // double  
    c1.show("harshil");  //  string
    return 0 ;  
}
*/

// run time  polimorphism  :

/*
#include<iostream>
using namespace std;
class animal 
{
    public : 
        virtual void sound()
        {
            cout<<"animal sound "<<endl;
        }

};
class dog : public animal
{
    public : 
        void sound() override
        {
            cout<<"dog barks "<<endl;
        }
}; 

class cat : public animal
{
    public : 
        void sound() override
        {
            cout<<"cat meows "<<endl;
        }
};

int main()
{
    animal *a; 

    dog d1; 
    cat c1; 

    a=&d1; 
    a->sound(); 

    a=&c1; 
    a->sound();

    return 0; 
}
*/

/*
int a =10 ; 
int  *p;   ==> pointer  declaration  
p= &a; ==> pointer  initialization

int  *p = &a ;  ==> pointer declaration  + initialization
*/

// poly + inheritance : 

#include<iostream>
using namespace std;

class bankaccount
{
    protected : 
        string acc_hname; 
        int balance;
    public : 
        bankaccount(string acc_hname , int balance)
        {
            this->acc_hname=acc_hname;
            this->balance=balance;
        }
    virtual void  display()
    {
        cout<<"account information"<<endl;
        cout<<"account holder name : "<<acc_hname<<endl;
        cout<<"balance : "<<balance<<endl;
    }
    virtual void cal_interest()
    {
        cout<<"poilcy  int calculation from bankaccount class "<<endl;
    }

};
class savingaccount : public bankaccount
{
    double  interest_rate; 

    public : 
        savingaccount(string acc_hname, int balance ,double interest_rate):bankaccount(acc_hname,balance)
        {
            this->interest_rate=interest_rate;
        }

        void  display() override
        {
            cout<<"saving account information"<<endl;
            cout<<"account holder name : "<<acc_hname<<endl;
            cout<<"balance : "<<balance<<endl;
            cout<<"interest rate : "<<interest_rate<<endl;
        }
        void cal_interest() override
        {
            double interest = (balance * interest_rate)/100;
            cout<<"interest from saving account : "<<interest<<endl;
        }
};      

class currentaccount : public bankaccount 
{
    double  overdraft_limit; 
    public : 
        currentaccount(string acc_hname, int balance ,double overdraft_limit) : bankaccount(acc_hname,balance)
        {
            this->overdraft_limit=overdraft_limit;
        }

    void  display() override
    {
        cout<<"current account information"<<endl;
        cout<<"account holder name : "<<acc_hname<<endl;
        cout<<"balance : "<<balance<<endl;
        cout<<"overdraft limit : "<<overdraft_limit<<endl;
    }
    void cal_interest() override
    {
        cout<<"no interest for current account "<<endl;
    }
}; 

int main()
{
    bankaccount *b; 

    cout<<"SAIVING ACCOUNT  DETAILS "<<endl;
    savingaccount s1("harshil",250000,5); 
    b=&s1; 
    b->display(); 
    b->cal_interest();

    cout<<endl;

    cout<<"CURRENT ACCOUNT DETAILS "<<endl;
    currentaccount c1("naitra",150000,20000);
    b=&c1;
    b->display();
    b->cal_interest();
    return  0; 
}
/*
fri :  7-8  sat : 12-2 pm  sun 12-1   

*/
