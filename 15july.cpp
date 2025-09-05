/*
cpp ==>  object oriented programming

class object 

class ==> blueprint of obj 
object ==> instance of class

fruits  ==> class 
    apple banana  kiwi  chiku  ==> objects 

class ==>   public : any where   
            private : only  in class 
            protected : only  in class and sub class 
*/
#include <iostream>
using namespace std;
class employee
{
    public :    // id  name  salary  ==> public  
        int id;
        string name;
        int salary;
    void  info()
    {
        cout<<"enter the id :";
        cin>>id;
        cout<<"enter the name :";
        cin>>name;
        cout<<"enter the salary :";
        cin>>salary;
    }
    void  display()
    {
        cout<<"id :"<<id<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"salary :"<<salary<<endl;
    }
};
int main()
{
    employee e1;  // employee class   ==> e1 object 
    e1.info();
    e1.display();  // display() method ==> function
    return 0;
}