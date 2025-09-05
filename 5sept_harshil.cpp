/*
encapsulation :

1. data hide  
2 . security  
3 . private , protected ==> direct access using get method , set method 

get method  :  data print  
set method  :  new value  set. 
*/
#include<iostream>
using namespace std;
class  bank 
{
    private : 
        string name;
        int acc_num ;
        int balance =25000;
    public :
    bank(string name, int acc_num)
    {
        this->name=name;
        this->acc_num=acc_num;
    }
    void  deposit(int amount)
    {
        balance+=amount; 
        cout<<"\n deposited amt : " <<amount<<"balance is : "<<balance;
    }
    void  withdraw(int amount)
    {
        balance-=amount;
        cout<<"\n withdraw amt : " <<amount<<"balance is : "<<balance;
    }
    string  get_name()
    {
        return name; 
    }
    int get_balance()
    {
        return balance; 
    }
    int set_balance(int new_balance)
    {
        balance =new_balance;
    }
};
int main()
{
    bank b1("harshil",12334);
    cout<<"=====without using set method======"<<endl;
    cout<<"name : "<<b1.get_name()<<endl;
    b1.deposit(1000); 
    b1.withdraw(5000);
    cout<<"\n balance : "<<b1.get_balance()<<endl;

    cout<<"=====using set method======"<<endl;
    b1.set_balance(35000); //balance =35000
    b1.deposit(1000); 
    b1.withdraw(5000);
    cout<<"\n balance : "<<b1.get_balance()<<endl;

    return 0;
}