// #include <iostream>
// using namespace std;

// class  vehicle
// {
//     public :  // public 
//         string name; //name  year ==> data member  ==> class vehicle 
//         int year;
//     void scan()   // function  ==> data member  ==> scan 
//     {
//         cout<<"enter the name :";
//         cin>>name;
//         cout<<"enter the year :";
//         cin>>year;
//     }
//     void display()// function  ==> data member  ==> display
//     {
//         cout<<"name :"<<name<<endl;
//         cout<<"year :"<<year<<endl;
//     }

// };
// int main()
// {
//     vehicle v1; //vehicle class ==> v1 object 
//     v1.scan();
//     v1.display();
//     return 0;
// }

// private  : 

// #include<iostream>
// using namespace std;

// class vehicle 
// {
//     private : 
//         string name;
//         int year;
    
//     public : 
//         void scan()
//         {
//             cout<<"enter the name :";
//             cin>>name;
//             cout<<"enter the year :";
//             cin>>year;
//         }

//         void display()
//         {
//             cout<<"name :"<<name<<endl;
//             cout<<"year :"<<year<<endl;
//         }
// }; 
// int main()
// {
//     vehicle v1;
//     v1.scan();
//     v1.display();
//     return 0;
// }

#include<iostream>
using namespace std;
class bank
{
    public : 
        int balance=0;
    
    void  deposit(int amt)
    {
        balance+=amt;
    }
    void  withdraw(int amt)
    {
        balance-=amt;
    }
    void check_balance()
    {
        cout<<"balance :"<<balance<<endl;
    }
};

int main()
{
    bank b1; 
    b1.deposit(10000);
    b1.withdraw(400);
    b1.check_balance();
    return 0;
}
/*
create  ==> user name ,  password 
login  ==> user name  pass ==> match 

balance =25000 

1.create  
2.login
3.deposit  
4.withdraw
5.check balance
6.exit
*/