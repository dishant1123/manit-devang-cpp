/*
constructor  :   it is  call automatically when  object is created . 

rule  : constructor name  should  start with  name of class .

1. default  constructor
2. parameterized constructor
3. copy constructor
4. non parameterized constructor

this==> operator   
*/

// default  constructor : 
// #include <iostream>
// using namespace std;

// class student
// {
//     public : 
//         student()
//         {
//             cout<<"default constructor"<<endl;
//             cout<<"harshil"<<endl;
           
//         }
       
// };
// int main()
// {
//     student s;
//     return  0;
// }

// non -parameterized  constructor :
// #include <iostream>
// using namespace std;

// class student
// {
//     public :
//         string name; 
//         int age;  
//     student()
//         {
//             name="harshil";
//             age=20;
//         }
//     void show()
//     {
//         cout<<"name : "<<name<<endl;
//         cout<<"age : "<<age<<endl;
//     }
// };   

// int main()
// {
//     student s;
//     s.show();  // harshil  20 
//     s.name ="viral";
//     s.age=21;
//     cout<<"student name : "<<s.name<<endl;
//     cout<<"student age : "<<s.age<<endl; 

//     s.show();
//     return  0;
// }


// parameterized  constructor :

// #include <iostream>
// using namespace std;

// class student
// {
//     public :
//         string name; 
//         int age;  
//     student(string n, int a )
//         {
//             name=n;
//             age=a;
//         }
//     void show()
//     {
//         cout<<"name : "<<name<<endl;
//         cout<<"age : "<<age<<endl;
//     }
// };   

// int main()
// {
//     student s("harshil",20);
//     s.show();  // harshil  20 
//     return  0;
// }

// this -> 

// #include <iostream>
// using namespace std;

// class student
// {
//     public :
//         string name; 
//         int age;  
//     student(string name, int age )
//         {
//             this->name=name;
//             this->age=age;
//         }
//     void show()
//     {
//         cout<<"name : "<<this->name<<endl;
//         cout<<"age : "<<this->age<<endl;
//     }
// };   

// int main()
// {
//     student s("harshil",20);
//     s.show();  // harshil  20 
//     return  0;
// }

//copy constructor :

#include <iostream>
using namespace std;

class student
{
    public :
        string name; 
        int age;  
    student(string n, int a )
        {
            name=n;
            age=a;
        }
    student(const student &s1)
    {
        name =s1.name; 
        age= s1.age; 
    }
    void show()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
    }
};   

int main()
{
    student s1("harshil",20);

    student s2 =s1; 

    s1.show();  // harshil  20
    s2.show(); 
    return  0;
}
