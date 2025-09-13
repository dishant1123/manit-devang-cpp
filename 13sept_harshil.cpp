/*
1. method  over  loading  ==> complie  time  run  
    a. function over loading  
    b. constructor  over loading  
    c. operator  over loading 

2. method  over riding  ==> run time  
*/

/*
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
*/
/*
int a =10 
int *p =&a   // pointer declare inti   
*/ 

#include<iostream>
using namespace std;
class bank 
{
    protected :
        string name;
        int balance;
    public : 
        bank(string name , int balance)
        {
            this->name=name;
            this->balance=balance;
        }
    virtual void display()
    {
        cout<<"name : "<<name<<"\n";
        cout<<"balance : "<<balance<<"\n";
    }
    virtual void interest()
    {
        cout<<"general bank so no interest.\n";
    }
};
class saving_ac :public bank 
{
    public : 
        double interest_rate;
    
    saving_ac(string name ,int balance , double interest_rate) : bank(name , balance)
    {
        this->interest_rate=interest_rate;
    }
    void display() override
    {
        cout<<"saving ac information\n"; 
        bank::display();
        cout<<"interest rate : "<<interest_rate<<"\n";
    }
    void interest() override
    {
        double int_amt = balance * (interest_rate /100);
        cout<<"interest amount : "<<int_amt<<"\n";
    }
};
class current_ac : public bank 
{
    public :
        double overdraft_limit; 
    current_ac(string name, int balance ,double overdraft_limit) : bank(name , balance)
    {
        this->overdraft_limit=overdraft_limit;
    }
    void display() override
    {
        cout<<"current ac information\n";
        bank::display();
        cout<<"overdraft limit : "<<overdraft_limit<<"\n";
    }
    void interest() override
    {
        cout<<"current ac so no interest.\n";
    }
};
int main()
{
    bank *b; 
   
    saving_ac s1("jay",25000,10); 
    b =&s1; 
    b->display();
    b->interest();

    current_ac c1("harshil",35000,1000);
    b=&c1;
    b->display();
    b->interest();

    return 0; 
}