/*
encapsulation  :  binding data and method  to gether inside class and  resting outside class and direct access to data and method for  public  private and  protected  class. 

1. get method   :  data print  
2. set method   :  new  value set . 
*/

#include <iostream>
using namespace std;
class bank 
{
    private : 
        string name;
        int accno;
        float balance;
    public :
        bank(string name, int accno, float balance)
        {
            this->name = name;
            this->accno = accno;
            this->balance = balance;
        }
        string getname()
        {
                return name;
        }
        int setbalance(int bal)
        {
            balance =bal; 
        }
        int getbalance()
        {
            return balance;
        }
    void deposit(float amount)
    {
        balance += amount;
        cout<<"deposit : "<<amount<<endl;

    }
    void withdraw(float amount)
    {
        balance -= amount;
        cout<<"withdraw : "<<amount<<endl;
    }
};
int main()
{
    bank b("devang",8900,10000);
    cout<<"name : "<<b.getname()<<endl;

    cout<<"before using set method \n"; 

    b.deposit(10000); 
    b.withdraw(1000);
    cout<<"before using  set method  your balance is :"<<b.getbalance()<<endl;

    b.setbalance(900);
    cout<<"after using set method your balance is :"<<b.getbalance()<<endl;

    b.deposit(1000);
    b.withdraw(100);
    cout<<"after using set method your balance is :"<<b.getbalance()<<endl;

    return  0;
}