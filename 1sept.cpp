/*
Hierarchical Inheritance

Multiple classes inherit from the same base class.


class a 
class b (a) 
class c (a)
*/
#include <iostream>
using namespace std;
class person 
{
    protected :
        string  name ; 
        int age ; 
    public : 
        person(string name, int age)
        {
            this->name =name; 
            this->age=age;
        }
};
class student : public person 
{
    protected :
        int roll;
    public : 
        student(string name ,int age, int rollno) : person(name,age) 
        {
            this->roll=rollno;
        }
};
class result : public student 
{
    private:
        int marks[3]; 
        int total; 
        float persontage; 
    public : 
        result(string name  , int age, int rollno , int m1,int m2,int m3) : student(name,age,rollno)
        {
            marks[0] =m1;
            marks[1] =m2;
            marks[2] =m3;
            total  =  m1+m2+m3;
            persontage = total /3;
        }
        friend void  show(result r);
};
void show(result  r)
{
    cout<<"=======student details====="<<endl;
    cout<<"rollno :"<<r.roll<<endl;
    cout<<"name :"<<r.name<<endl;
    cout<<"age :"<<r.age<<endl;

    cout<<"=======result details====="<<endl;
    cout<<"marks :"<<r.marks[0]<<" "<<r.marks[1]<<" "<<r.marks[2]<<endl;
    cout<<"total :"<<r.total<<endl;
    cout<<"persontage :"<<r.persontage<<endl;
}
int main()
{
    int n; 
    cout<<"enter the number of students : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string name; 
        int age; 
        int rollno; 
        int m1,m2,m3; 
        cout<<"enter the name , age , rollno , marks of 3 subjects : ";
        cin>>name>>age>>rollno>>m1>>m2>>m3;
        result r(name,age,rollno,m1,m2,m3);
        show(r);
        cout<<endl;
    }
    return 0;
}