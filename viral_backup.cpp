/*
class  : 

1.public : access any where 
2.private : with in class access 
3. protected : derived class can access
*/

// public : 

/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        int rollno;  // rollno name  marks ==> public data member 
        string name; 
        int marks; 
    student() // constructor  
    {
        rollno =1;
        name = "viral";
        marks =90;
    }
};
int main()
{
    student s1;   // s1 ==> object 

    cout<<"rollno  of student is  :"<<s1.rollno<<"\n";   // object though  ==> public 
    cout<<"name is of student  :"<<s1.name<<"\n";
    cout<<"marks is of student is  :"<<s1.marks<<"\n";
    return 0;

}
*/ 

// private  : 

// #include <iostream>
// using namespace std;
// class student
// {
//     private : 
//         int  rollno ; 
//         string name ; 
//         int marks ;
//     public : 
//         student()
//     {
//         rollno =1;
//         name = "viral";
//         marks =90;
//     }
//     void show()
//     {
//         cout<<"rollno  of student is  :"<<rollno<<"\n";
//         cout<<"name is of student  :"<<name<<"\n";
//         cout<<"marks is of student is  :"<<marks<<"\n";
//     }
// };
// int main()
// {
//     student s1; 
//     s1.show();
//     return 0;
// }

// protected : 
#include <iostream>
using namespace std;
class student  // base class 
{
    protected : 
        int  rollno ; 
        string name ; 
        int marks ;
    public : 
        student()
    {
        rollno =1;
        name = "viral";
        marks =90;
    }
};
class clg : public student  // derived class
{
    public : 
        void show()
        {
            cout<<"rollno  of clg is  :"<<rollno<<"\n";
            cout<<"name is of clg  :"<<name<<"\n";
            cout<<"marks is of clg is  :"<<marks<<"\n";
        }
};
int main()
{
    clg c1; 
    c1.show();
    return 0;
}
