// single level  inheritance  : 
#include<iostream>
using namespace std;
class person   //  base class 
{
    public :
        string name;
        int age;
    
    person() // non parameterized constructor
    {
        name ="devang";
        age =20;
    }
    void  show()
    {
        cout<<"person class"<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
    }
};
class student  : public person  // derived class
{
    public :
        string clg_name;
    
    student() :person() // base class constructor call 
    {
        clg_name ="ld engineering";
    }
    void  show()
    {
        cout<<"student class"<<endl;
        cout<<"clg_name : "<<clg_name<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
    }
};
int main()
{
    student s1;
    s1.show();
    return  0;
}