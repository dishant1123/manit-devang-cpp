/*
encapsulation  :  binding data and method  to gether inside class and  resting outside class and direct access to data and method for  public  private and  protected  class.

1.get method : data get   ==> print  
2.set method :  new value  set 

*/

#include <iostream>
using namespace std;

class bank 
{
    private : 
        string name ; 
        int accno; 
        int balance =25000;
    public : 
    bank(string name , int accno)
    {
        this->name =name;
        this->accno =accno;
    }
    string get_name()
    {
        return name; 
    }
    int  get_balance()
    {
        return balance;
    }
    int set_balance(int new_bal)
    {
        balance =new_bal;
    }
    void deposit(int amt)
    {
        balance +=amt;
        cout<<"deposit : "<<amt<<endl;
        cout<<"your balance is : "<<balance<<endl;
    }
    void withdraw(int amt)
    {
        balance -=amt;
        cout<<"withdraw : "<<amt<<endl;
        cout<<"your balance is : "<<balance<<endl;
    }
};
int main()
{
    bank b("prince",1234); 
    cout<<"without using set method \n";
    cout<<"name  is : "<<b.get_name()<<endl;
    b.deposit(1000);
    b.withdraw(100);
    cout<<"after using deposit and withdraw  your balance is : "<<b.get_balance()<<endl;
    
    cout<<"using set method \n";
    b.set_balance(15000); //set  balance  new value  ==> 15000 
    b.deposit(1000);
    b.withdraw(100);
    cout<<"after using deposit and withdraw  your balance is : "<<b.get_balance()<<endl;
    return 0;
}