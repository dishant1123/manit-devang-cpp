/*
constructor  : automatically called  when  object is  created.   

==> rule : class name   ==> constructor  name 
*/

/*
#include<iostream>
using namespace std;
class person 
{
    public : 
        string name ;
        int age ;
    person()   // constructor   ==> class name  ==> constructor name  ==> non parameter  
    {
        name ="pratham";
        age =17;
    }
    void show() 
    {
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
    }
};
int main()
{
    person p;   // person  class name  ==> p is  object 
    p.show();
    return 0;
}
*/
#include<iostream>
using namespace std;
class employee
{
    private:
        string name ; 
        int age; 
    public :
    employee(string n , int a) // paramter constructor  ==> class name  ==> constructor name
    {
        name =n;
        age =a; 
    }
    void show()
    {
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
    }
};
int main()
{
    employee e1("pratham",17);
    employee e2("prince",20);
    e1.show();
    e2.show(); 
    return 0;
}