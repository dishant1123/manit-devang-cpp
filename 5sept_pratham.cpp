/*
encapsulation : 
data hide ,  private  , protected direct access 

1.get method  :  data print  
2.set method  :  new value  set .

*/

#include <iostream>
using namespace std;
class bank 
{
    private :
        string name; 
        int acc_num; 
        int balance =25000; 
    public : 
        bank(string n ,int a)
        {
            name= n;
            acc_num=a;
        }
        void deposit(int amount)
        {
            balance+=amount;
            cout<<"\n balance deposited amt "<<amount<<" is : "<<balance;
        }
        void  withdraw(int amount)
        {
            balance-=amount;
            cout<<"\n balance withdraw amt "<<amount<<" is : "<<balance;
            
        }
        string get_name()
        {
            return name; 
        }
        int get_balance()
        {
            return balance; 
        }
        int set_balance(int new_balance)
        {
            balance=new_balance;
        }

};
int main()
{
    bank b1("pratham",12345);
    cout<<"=====without using set method======"<<endl;
    cout<<"name : "<<b1.get_name()<<endl;
    cout<<"balance : "<<b1.get_balance()<<endl;  //25000 

    b1.deposit(1000); 
    b1.withdraw(500); 
    cout<<"\n balance : "<<b1.get_balance()<<endl;

    cout<<"=====using set method======"<<endl;
    b1.set_balance(35000);  // new balance set using set method  
    b1.deposit(1000); 
    b1.withdraw(500); 
    cout<<"\n balance : "<<b1.get_balance()<<endl;

    return  0;

}