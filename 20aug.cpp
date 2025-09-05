/*
inheritance  :  to inheirt  the  properties  of  a  class  to  another  class.

1.single  level  inheritance
2.multi  level  inheritance
3. multiple inheritance

*/

// single level inheritance :

// #include<iostream>
// using namespace std;
// class student 
// {
//     public :
//         string name ="viral"; 
//         int rollno=100;
    
//     void show1()
//     {
//         cout<<"student name : "<<name<<endl;
//         cout<<"student rollno : "<<rollno<<endl;
//     }
// };
// class exam : public student
// {
//     public : 
//         int marks=100;

//     void show()
//     {
//         cout<<"exam marks : "<<marks<<endl;
//         cout<<"student name : "<<name<<endl;
//         cout<<"student rollno : "<<rollno<<endl;
//     }
// };
// int main()
// {
//     exam e1; 
//     e1.show1();
//     e1.show();
//     return 0;
// }


// constructor  : 

#include<iostream>
using namespace std;
class student 
{
    public :  
        string name; 
        int rollno;
    student(string n, int r)
    {
        name =n; 
        rollno =r;
    }
    void display()
    {
        cout<<"student name : "<<name<<endl;
        cout<<"student rollno : "<<rollno<<endl;
    }
};
class exam : public student
{
    public : 
        int marks;

    exam(string  n , int r , int m) : student(n,r)   //student  constructor  calling 
    {
        marks =m;
    }
    void mark_display()
    {
        cout<<"exam marks : "<<marks<<endl;
    }    
};
int main()
{
    exam e1("viral",1,10);
    e1.display();  // calling  the  display  method  of  the  student  class
    e1.mark_display();
    return 0;
}

