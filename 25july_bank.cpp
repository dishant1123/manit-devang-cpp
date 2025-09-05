/*
bank app  : 

*/
#include<iostream>
using namespace std;
class bank
{
    private :
        int balance =0 ;
        int account_number ;
        string name ;
        string password ;
        string username ;
    public : 
        bank(int account_number,string name,int balance=0)
        {
                this->account_number =account_number;
                this->name =name;
                this->balance =balance;
        }    

    void create_account()
    {
        cout<<"username :";
        cin>>username;
        cout<<"password :";
        cin>>password;
    }
    
    void login()
    {
        string username1,password1;
        cout<<"enter username :";
        cin>>username1;
        cout<<"enter password :";
        cin>>password1;
        if (username ==username1 && password ==password1)
        {
            cout<<"login success"<<endl;
        }
        else 
        {
            cout<<"login failed"<<endl;
        }
    }
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
    bank b1(1234,"manit");
    int choice ;
    bool log_in =false;

    while (true)
    {
         while (true) {
        cout << "\n==== Bank Menu ====\n";
        cout << "1. Create Account\n";
        cout << "2. Login\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Check Balance\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            b1.create_account();
            break;
        case 2:
            log_in = b1.login();
            break;
        case 3:
            if (log_in) {
                cout << "Enter amount to deposit: ";
                cin >> amount;
                b1.deposit(amount);
            } else {
                cout << "❗ Please login first.\n";
            }
            break;
        case 4:
            if (logged_in) {
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                b1.withdraw(amount);
            } else {
                cout << "❗ Please login first.\n";
            }
            break;
        case 5:
            if (logged_in)
                b1.check_balance();
            else
                cout << " Please login first.\n";
            break;
        case 6:
            cout << " Thank you for using the bank system!\n";
            return 0;
        default:
            cout << " Invalid choice. Try again.\n";
        }
    }
}
    }
    

