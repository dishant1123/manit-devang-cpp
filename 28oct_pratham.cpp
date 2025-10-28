/*
inheritance + encapsulation
*/

#include <iostream>
using namespace std;
class person
{
    private :
        string name; 
        int age;
    public : 
        person(string n,int a)
        {
            name=n; 
            age =a; 
        }
        void setname(string n)
        {
            name=n;
        }
        string getname()
        {
            return name; 
        }
        void setage(int a)
        {
            if (a >0)
            {
                age =a; 
            }
            else 
            {
                cout<<"age must be greater than 0"<<endl;
            }
        }
        int getage()
        {
            return age;
        }
        void  display()
        {
            cout<<"name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
        }
};  

class employee : public person 
{
    private : 
        int emp_id;
        float salary;
    public : 
        employee(string n,int a,int e,float s) : person(n,a)
        {
            emp_id = e;
            salary = s;
        }

        void setemp_id(int e)
        {
            emp_id = e;
        }
        int getemp_id()
        {
            return emp_id;
        }
        void  setsalary(float s)
        {
            salary = s;
        }
        float setsalary()
        {
            return salary;
        }
        void emp_display()
        {
            display();  // call function from  parent class ==>  person  
            cout<<"emp_id : "<<emp_id<<endl;
            cout<<"salary : "<<salary<<endl;
        }
};
int main()
{
    employee e("pratham",20,101,90000); 
    cout<<"without using set method "<<endl;
    e.emp_display(); 

    cout<<"name : "<<e.getname()<<endl;
    cout<<"age : "<<e.getage()<<endl;

    cout<< "using set method "<<endl;

    e.setname("Yash");
    e.setage(21); 
    e.setemp_id(102); 
    e.setsalary(100000);

    cout<<"after  using  set method : "<<endl;
    e.emp_display();
    cout<<"name : "<<e.getname()<<endl;
    cout<<"age : "<<e.getage()<<endl;

    return 0;
}