/*
encapsulation  :  using private  member  direct  access 
1. get  :  data print 
2. set : new value  set 

*/

#include <iostream>
using namespace std;
class person 
{
    private : 
        int age;
        string name;
    public :
        person(int a,string n)
        {
            age = a;
            name = n;
        }
        void get_age()
        {
            cout<<"age : "<<age<<endl;
        }
        string get_name()
        {
            cout<<"name : "<<name<<endl;
        }
        int set_age(int new_age)
        {
            age = new_age; 
        }
};
int main()
{
    person p(20,"pratham"); 
    cout<< "without using  set method "<<endl;

    // cout<<"age : "<<p.get_age()<<endl;
    // cout<<"name : "<<p.get_name()<<endl;

    p.get_name();
    p.get_age();   // 20 

    cout<< "using set method "<<endl;
    p.set_age(21);
    p.get_age(); 

    return 0; 
}