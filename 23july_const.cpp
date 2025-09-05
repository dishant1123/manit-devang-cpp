/*
constructor  : automatically called when object is created
1. default constructor
2. parameterized 
3 . non parameterized
4. copy constructor
rules  : 1. class name  same as  constructor  it is compulsory. 
*/

/*
#include <iostream>
using namespace std;
class employee 
{
    public : 
        string name ;
        int age ;
        int salary ;
    employee(string n ,int a , int s )
    {
        name =n;
        age =a;
        salary =s;
    }
    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"salary : "<<salary<<endl;
    }
};
int main()
{
    employee e1("manit",21,1234);
    employee e2("devang",22,1234);
    e1.display();
    e2.display();
    return 0;
}
 */

// copy  constructor : 
#include <iostream>
using namespace std;
class employee
{
    public :
        string name; 
        int age;
    
    employee()
    {
        name = "default";
        age =0;
    }
    employee(string n , int a )
    {
        name =n ;
        age =a;
    }
    employee(const employee &e)   // employee (const employess &s)
    {
        name =e.name; 
        age =e.age;
    }
    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
    }
}; 

int main()
{
    employee e1("manit",21);
    employee e2=e1;
    employee (e3) =e1;

    cout<<"original employee"<<endl;
    e1.display();

    cout<<"copy employee"<<endl;
    e2.display();

    cout<<"copy constructor employee"<<endl;
    e3.display();
    return 0;
}
// this operator  ,  constructor  over loading 