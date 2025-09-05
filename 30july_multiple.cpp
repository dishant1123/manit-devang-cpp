// multiple  inheritance : 
/*
class teacher :     base 
class student :    base
class clgname : public teacher , public student   1 derivred class 
*/
#include<iostream>
using namespace std;
class teacher 
{
    public :
        string teacher_name;
    
    teacher(string teacher_name)
    {
            this->teacher_name=teacher_name;
    }
};
class student 
{
    public :
        string student_name;
    
    student(string student_name)
    {
            this->student_name=student_name;
    }

};
class college : public teacher , public student 
{
    public :
        string clg_name;
    
    college(string clg_name,string teacher_name,string student_name):teacher(teacher_name),student(student_name)
    {
        this->clg_name=clg_name;
    }
    void show()
    {
        cout<<"clg_name :"<<clg_name<<endl;
        cout<<"teacher_name :"<<teacher_name<<endl;
        cout<<"student_name :"<<student_name<<endl;
    }
};
int main()
{
    college c1("ld engineering","prof.viral maru","jay");
    c1.show();
    return 0;
}