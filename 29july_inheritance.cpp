//using constrcutor and data member : 
#include<iostream>
using namespace std;
class student
{
    protected:
        int rollno;
        string name;
        int age;
    public :
        
        student(string name,int age,int rollno)
        {
            this->name=name; 
            this->age=age;
            this->rollno=rollno;
        }

};
class clg : public student 
{
    public :
    string clg_name;

    clg(string name,int age,int rollno,string clg_name) :student(name,age,rollno)
    {
        this->clg_name=clg_name;
    }
    void show()
    {
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"roll no :"<<rollno<<endl;
        cout<<"clg_name :"<<clg_name<<endl;
    }
};
int main()
{
    clg c1("jay",20,12,"ld engineering college");
    c1.show();
    return 0;
}

