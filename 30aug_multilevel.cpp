/*
private  protected : 

within  class

friend  : 

multi level :  vs   multi ple  :  

class a            class a 
class b (a)        class  b  
class c(b)         class c(a,b)

*/

// #include <iostream>
// using namespace std;
// class person 
// {
//     protected :
//         string name; 
//         int age; 
//     public : 
//         person(string  name, int age )
//         {
//             this->name=name; 
//             this->age =age; 
//         }
// };
// class student :public person
// {
//     protected :
//         int rollno; 
//     public  : 
//         student(string name  , int age, int  rollno) :person(name, age)
//         {
//             this->rollno =rollno; 
//         }
// };
// class result : public student 
// {
//     private :
//         int marks[3]; 
//         int total; 
//         float percentage;
//     public : 
//         result(string name,int age,int rollno,int marks1,int marks2,int marks3):student(name,age,rollno)
//         {
//             this->marks[0]=marks1;
//             this->marks[1]=marks2;
//             this->marks[2]=marks3;
//             total =marks1+marks2+marks3;
//             percentage=total/3;
//         }
//         friend void show(result r);
// };
// void show(result r)
// {
//     cout<<"======STUDENT DETAILS======"<<endl;
//     cout<<"Rollno :"<<r.rollno<<endl;
//     cout<<"Name :"<<r.name<<endl;
//     cout<<"Age :"<<r.age<<endl; 
//     cout<<"=======RESULT DETAILS========"<<endl;
//     cout<<"Marks :"<<r.marks[0]<<" "<<r.marks[1]<<" "<<r.marks[2]<<endl;
//     cout<<"Total Marks :"<<r.total<<endl;
//     cout<<"Percentage :"<<r.percentage<<endl;
// }
// int main()
// {
//     int n ;
//     cout<<"Enter the number of students"<<endl;
//     cin>>n;

//     for (int i =0; i<n; i++)
//     {
//         string name;
//         int age,rollno,marks1,marks2,marks3;
//         cout<<"Enter the rollno of student "<<i+1<<endl;
//         cin>>rollno;
//         cout<<"Enter the name of student "<<i+1<<endl;
//         cin>>name;
//         cout<<"Enter the age of student "<<i+1<<endl;
//         cin>>age;
//         cout<<"Enter the marks of student "<<i+1<<endl;
//         cin>>marks1;
//         cout<<"Enter the marks of student "<<i+1<<endl;
//         cin>>marks2;
//         cout<<"Enter the marks of student "<<i+1<<endl;
//         cin>>marks3;

//         result r(name,age,rollno,marks1,marks2,marks3);
//         show(r);

//     }
//     return 0;
// }


// == > Hierarchical Inheritance :  multiple class inherit from same base class 

/*
class a 

class b (a) 

class c(a)  
*/

#include <iostream>
using namespace std;
class person 
{
    private : 
        string name ; 
        int age ;
    
    public : 
        person()
        {
            name="harshil";
            age=20;
        }
    void show()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
}; 

class city :public person
{
    private :
        string city_name; 
    public :
        city(string city_name,string name,int age) :person()
        {
            this->city_name=city_name;
        }
    void show()
    {
        
    }
};   

