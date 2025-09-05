/*
consttuctor : 

this  operator  : 
*/

// #include <iostream>
// using namespace std;
// class vehicle
// {
//     public : 
//         int speed; 
//         string name ; 
    
//     vehicle(string name , int speed )
//     {
//         this->name =name;
//         this->speed=speed;
//     }
//     void display()
//     {
//         cout<<"name : "<<name<<endl;
//         cout<<"speed : "<<speed<<endl;
//     }
// };
// int main()
// {
//     vehicle v1("audi",200); 
//     v1.display();
//     return 0;
// }


/*
constructor  over loading  : 
    vehicle ()
    vehicle (string name  , int speed )

   
*/

/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name ;
        int age; 
        int marks ;

    student()  // default constructor
    {
        name ="default";
        age =0;
        marks =0;
    }
    student(string n) // parameterized constructor only one argument 
    {
        name =n;
        age =0;
        marks =0;
    }
    student(string n , int a,int m)  // parameterized constructor with all arguments
    {
        name =n;
        age =a;
        marks =m;
    }
    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"marks : "<<marks<<endl;
    }
    
};

int main()
{
    student s1; //calls default  
    student s2("manit"); //calls parameterized constructor only oner arg 
    student s3("manit",21,99);  // calls parameterized constructor with all arguments

    s1.display();
    s2.display();
    s3.display();
    return 0;
}
*/ 

// constructor  :  automatically call when   object is  created . 

#include <iostream>
using namespace std; 
class person 
{
    public : 
        string name ;
        int age; 
        int marks ;

    person()
    {
        name ="default";
        age =0;
        marks =0;
    }
    person(string n,int a,int m)
    {
        name =n;
        age =0;
        marks=0;
    } 
    person(string  n)
    {
        name =n;
        age =0;
        marks=0;
    }
    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"marks : "<<marks<<endl;
    }
};

int main()
{
    // person p1("harshil",20,99);
    // p1.display();
    // p1.age=20;
    // p1.name="devang";
    // p1.marks=90;

    // cout<<"name : "<<p1.name<<endl;
    // cout<<"age : "<<p1.age<<endl;
    // cout<<"marks : "<<p1.marks<<endl;
    //

    person p1("devang",20,99);
    person p2("manit"); 
    person p3;

    p1.display();
    p2.display();
    p3.display();
    return  0;
}