/*
bal =25000 
1. deposit   ==>10000 
2. withdraw  ==> 15000 
3. check _balance

passbook.txt 
                        STATE BANK OF INDIA 
                                                ACC.NO :729212390003
DATE : 24-9-2025                                ACC.NAME :HARSHIL THAKKAR 
BRANCH : AHMEDABAD                              PAN :AWKPS3297A 

DATE/TIME            AMOUNT           DR          CR          BALANCE 

24-9-2025                                                     25000 
24-9-2025            10000                       10000        35000 
24-9-2025            15000           15000                    20000

*/

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;
class bank 
{
    string acno,accname,branch,pan;
    float balance;

    public : 
        bank(string acno,string accname,string branch,string pan,float balance=0)
        {
            this->acno=acno;
            this->accname=accname;
            this->branch=branch;
            this->pan=pan;
            this->balance=balance;
        
            ofstream fout("passbook.txt");
            fout<<"\t\t\tSTATE BANK OF INDIA"<<endl;
            fout<<"ACC.NO :"<<acno<<setw(40)<<"DATE :25-09-2025 "<<endl;
            fout<<"ACC.NAME :"<<accname<<setw(30)<<"BRANCH :"<<branch<<endl;
            fout<<"PAN :"<<pan<<endl;
            fout<<left<<setw(20)<<"DATE/TIME"<<setw(15)<<"AMOUNT"<<setw(15)<<"DR"<<setw(15)<<"CR"<<setw(15)<<"BALANCE"<<endl;
            fout.close();

        }
        string getdatetime()
        {
            time_t now =time(0);
            tm *ltm=localtime(&now);
            char dt[20];
            sprintf(dt,"%d-%d-%d",ltm->tm_mon+1,ltm->tm_mday,ltm->tm_year+1900);
            return string(dt);
        }
        void  deposit(float amt)
        {
            balance +=amt;
            ofstream fout("passbook.txt",ios::app);
            fout<<getdatetime()<<setw(15)<<amt<<setw(15)<<0<<setw(15)<<0<<setw(15)<<balance<<endl;
            fout.close();
        }

        void  withdraw(float amt)
        {
            balance -=amt;
            ofstream fout("passbook.txt",ios::app);
            fout<<getdatetime()<<setw(15)<<0<<setw(15)<<amt<<setw(15)<<balance<<endl;
            fout.close();
        }
        void  check_balance()
        {
            cout<<"Balance is "<<balance<<endl;
            ofstream fout("passbook.txt",ios::app);
            fout<<getdatetime()<<setw(15)<<0<<setw(15)<<0<<setw(15)<<balance<<endl;
            fout.close();
        }
        
};
int main()
{
    bank b("729212390003","HARSHIL THAKKAR","AHMEDABAD","AWKPS3297A");

    int choice ;
    int amt; 
    do{
        cout<<"1. Deposit\n2. Withdraw\n3. Check Balance\nEnter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter amount : ";
                cin>>amt;   
                b.deposit(amt);
                break;
            case 2:
                cout<<"Enter amount : ";
                cin>>amt;   
                b.withdraw(amt);
                break;
            case 3:
                b.check_balance();
                break;
            case 4 :
                cout<<"thx for using the system"<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    } while (choice!=4);
    return 0;
    
}