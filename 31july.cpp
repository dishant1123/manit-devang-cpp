#include<iostream>
using namespace std;
class teacher 
{
    private :
        string teacher_name;
    public :
  
    teacher(string teacher_name)
    {
            this->teacher_name=teacher_name;
    }
    string get_teacher_name()
    {
        return teacher_name;
    }
};
class student 
{
    private :
        string student_name;
    public :
    student(string student_name)
    {
            this->student_name=student_name;
    }

    string get_student_name()
    {
        return student_name;
    }
};
class college : public teacher , public student 
{
    private:
        string clg_name;
    public :
    
    college(string clg_name,string teacher_name,string student_name):teacher(teacher_name),student(student_name)
    {
        this->clg_name=clg_name;
    }
    void show()
    {
        cout<<"clg_name :"<<clg_name<<endl;
        cout<<"teacher_name :"<<get_teacher_name()<<endl;
        cout<<"student_name :"<<get_student_name()<<endl;
    }
};
int main()
{
    college c1("ld engineering","prof.viral maru","jay");
    c1.show();
    return 0;
}