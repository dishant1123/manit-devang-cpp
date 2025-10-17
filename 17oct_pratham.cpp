/*
encapsulation  : wrapping data  and function  that operate  on that data in to single unit.

1. get method : data print  and return  data.
2. set  method  : new varibale  set to data.

*/
/*

#include <iostream>
using namespace std;
class student
{
    private :
        string name; 
        int age; 
    public : 
    student(string n,int a)
    {
            name =n; 
            age =a; 
    }
    string getname()
    {
        return name; 
    }
    int  getage()
    {
        return age; 
    }
};
int main()
{
    student s1("pratham",20);

    cout<<"student name is  "<<s1.getname()<<endl;
    cout<<"student age is  "<<s1.getage()<<endl;

    return 0;
}
*/ 

// encap  :  use  mostly to access private data  and function  that operate  on that data in to single unit.

#include <iostream>
using namespace std;
class employee 
{
    private:
        string name;
        int age;
        int salary;
    public : 
        employee(string n,int a,int s)
        {
            name =n;
            age=a;
            salary=s;
        }
        string getname()
        {
            return name;
        }
        int getage()
        {
            return age;
        }
        int getsalary()
        {
            return salary;
        }
        int setsalary(int s)
        {
            salary=s;
        }
};
int main()
{
    employee e1("pratham",20,100000);
    cout<<"before using set method"<<endl;
    cout<<"employee name is  "<<e1.getname()<<endl;
    cout<<"employee age is  "<<e1.getage()<<endl;
    cout<<"employee salary is  "<<e1.getsalary()<<endl; 

    cout<<"after using set method"<<endl;

    e1.setsalary(200000); 
    cout<<"employee salary is  "<<e1.getsalary()<<endl; 

    return 0;
}

/*
user  = pratham_m 
password = pm@123 

password = @12PM

*/