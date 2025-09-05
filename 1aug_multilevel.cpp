/*
multi ple  :   2 base 1 derived

class student : 
class person : 
class exam : public student , public person 

multi level inheritance : 
class person : 
class student : public person  
class exam : public student 
*/

#include<iostream>
using namespace std;
class  person
{
    public : 
        string name ; 
    void get_name()
    {
        cout<<"enter the name : ";
        cin>>name;
    }
    void show_name()
    {
        cout<<"person class"<<endl;
        cout<<"name : "<<name<<endl;
    }
};
class student : public person 
{
    public :
        int rollno;
    void get_rollno()
    {
        cout<<"enter the rollno : ";
        cin>>rollno;
    }
    void  show_rollno()
    {
        cout<<"student class"<<endl;
        cout<<"rollno : "<<rollno<<endl;
    }
};
class  exam :  public student 
{
    public :
        int marks;
    void  get_marks()
    {
        cout<<"enter the marks : ";
        cin>>marks;
    }
    void show_marks()
    {
        cout<<"exam class"<<endl;
        cout<<"marks : "<<marks<<endl;
    }
};
int main()
{
    exam e1;
    e1.get_name();
    e1.get_rollno();
    e1.get_marks();

    cout<<"student - exam information"<<endl;
    e1.show_name();
    e1.show_rollno();
    e1.show_marks();

    student s1; 
    s1.get_name();
    s1.get_rollno();

    cout<<"student information"<<endl;
    s1.show_name();
    s1.show_rollno();
    return 0;
}