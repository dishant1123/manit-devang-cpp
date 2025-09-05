// private : 
/*
data member  ==> accessible  only  within the class 
*/
// #include<iostream>
// using namespace std;
// class student
// {
//     private :
//         string name="harshil"; 
//         int age=20; 

//     public :
//         void  show()
//         {
//             cout<<"student name  is  : "<<name<<endl;
//             cout<<"student age  is  : "<<age<<endl;
//         }
// };
// int main()
// {
//     student s ; 
//     s.show();
//  //   cout<<"name"<<s.name; // error because  name is private 
//     return 0;  
// }

#include<iostream>
using namespace std;
class bank
{
    public :
        int balance =0; 
        string name ; 
        int accno=1; 
    void scan()
    {
        cout<<"enter the name  : "<<endl;
        cin>>name;
    }
    void depsoit(int amt)
    {
        balance =balance +amt;
        cout<<"after depsoit   your is  balance : "<<balance<<endl;
    }
    void withdraw(int amt)
    {
        if (balance -amt >=10000)
        {
            balance =balance -amt;
            cout<<"after withdraw  your is  balance : "<<balance<<endl;

        }
        else 
        {
            cout<<"not enough balance"<<endl;
        }
    }
    void check_balance()
    {
        cout<<"your balance : "<<balance<<endl;
    }
};
int main()
{
    bank b;

    int  acc_no; 
    cout<<"enter the account  number  for  verification  : "<<endl; 
    cin>>acc_no;
    if (acc_no ==b.accno)
    { 
        b.scan();
        b.depsoit(1000);
        b.withdraw(4000);
        b.check_balance();
    }
    else 
    {
        cout<<"account number is wrong"<<endl;
    }
    return 0;
}


/*
enter the account number for verification  : 12
login 
user name :  
password : 

menu driven convert : 

1. login    == > successfully   ==> acc ==> 25000 
2. deposit 
3. withdraw 
4. check balance
5. exit

*/
