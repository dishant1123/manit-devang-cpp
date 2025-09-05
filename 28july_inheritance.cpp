/*
oop  :
1.  inheritance :  to inherit  the properties of a class
    a. single level inheritance
    b. multiple level inheritance
    c. multi level inheritance
    d. hierarchical inheritance
*/

// a . single level inheritance : 
/*
#include<iostream>
using namespace std;
class student  // base class 
{
    public :
    void show()
    {
        cout<<"this is  student  class."<<endl;
    }
};
class clg : public student   // clg ==> derived class
{
    public :
    void  show1()
    {
        cout<<"this is clg class."<<endl;
    }
};
int main()
{
    clg c1;
    c1.show();
    c1.show1();
    return 0;
}
*/

// using constructor and data member 
#include<iostream>
using namespace std;
class student
{
    public :
        string name="jay" ;
        int roll_no=12 ;
    
};
class clg : public student
{
    public :
        string clg_name="LD Engineering College" ;
    
    void show()
    {
        cout<<"name :"<<name<<endl;
        cout<<"roll no :"<<roll_no<<endl;
        cout<<"clg name :"<<clg_name<<endl;
    }
};
int main()
{
    clg c1;
    c1.show();
}
