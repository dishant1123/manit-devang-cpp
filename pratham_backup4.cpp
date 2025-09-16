/*
inheritance  : to inherit  property  of  another  class . 

1. single level 
2. multiple level
3. multi level  
4. hierarchical level  
*/
// single  level  inheritance : 

/*
#include<iostream>
using namespace std;
class animal 
{
    public  :
        string name ; 
        int age; 
    animal(string n , int a)
    {
        name =n; 
        age =a;
    }
    void  display()
    {
        cout<<"animal name : "<<name<<"\n";
        cout<<"animal age : "<<age<<"\n";
    }
};
class dog : public animal 
{
    public : 
        string breed;

    dog(string n , int a, string b) : animal(n,a)
    {
        breed =b; 
    }
    
    void  display()
    {
        animal::display();
        cout<<"dog breed : "<<breed<<"\n";
    }
}; 
int main()
{
    dog d1("kenzo",6,"labrador");
    d1.display();
    return 0; 
}
*/

//multiple level  inheritance 
#include<iostream>
using namespace std;
class teacher  // base 1 
{
    public : 
        string name;
    teacher(string  na)
    {
        name =na;
    }
    void  teaching()
    {
        cout<<"name is  : "<<name<<"\n";
        cout<<"teaching\n";
    }
};
class doctor  // base 2 
{
    public : 
        string doc_name; 
    doctor(string  n)
    {
        doc_name =n;
    }
    void treatment()
    {
        cout<<"name is : "<<doc_name<<"\n";
        cout<<"treatment\n";
    }
};
class person : public teacher , public doctor //  derived ==> base1 , base 2 
{
    public : 
        string person_name;
    
    person(string  n, string  na,string nam) : teacher(na) , doctor(n)
    {
        person_name =nam;
    }
    void display()
    {
        cout<<"person name : "<<person_name<<"\n";
        cout<<"teacher name : "<<name<<"\n";
        cout<<"doctor name : "<<doc_name<<"\n";
    }
};
int main()
{
    person p1("dr.anil","prof.vyas","vyom"); 
    p1.display();
    p1.teaching();  // teacher 
    p1.treatment(); // doctor  
    return 0; 
}