// public : 
/*
#include<iostream>
using namespace std;
class person    // person  class name  
{
    public : 
        string name ="pratham";    // name age  city data  member  ==> public ==>access any where 
        int age =19;
        string city= "ahmedabad";

    // void show()
    // {
    //     cout<<"name is : "<<name<<endl;
    //     cout<<"age is : "<<age<<endl;
    //     cout<<"city is : "<<city<<endl;
    // }
};
int main()
{
    person p;  // person  class ==> p ==> obj ; 
    // p.show();
    cout<<"name is : "<<p.name<<endl;
    cout<<"age is : "<<p.age<<endl;
    cout<<"city is : "<<p.city<<endl;
    return 0;
}
*/ 
// private  : 
/*
#include<iostream>
using namespace std;
class person    // person  class name  
{
    private : 
        string name ="pratham";    // name age  city data  member  ==> private ==>access only in class  
        int age =19;
        string city= "ahmedabad";

    public : 
        void show()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
            cout<<"city is : "<<city<<endl;
        }
};
int main()
{
    person p;  // person  class ==> p ==> obj ; 
    p.show();
    // cout<<"name is : "<<p.name<<endl;  // not  accessible outside the  class beacuse  of private
    // cout<<"age is : "<<p.age<<endl;
    // cout<<"city is : "<<p.city<<endl;
     return 0;
}
*/

// multi level inheritance : 

/*
class a 
class b : public a 
class c : public b 
*/

#include<iostream>
using namespace std;
class student 
{
    private :
        string name ="pratham";
        int age =19;
        string city= "ahmedabad";
    public : 
        void show()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
            cout<<"city is : "<<city<<endl;
        }
       
};

class teacher : public student 
{
    public : 
        string  t_name = "prof vyas";
        int age =40;
    void  display()
    {
        student ::show(); 
        cout<<"teacher name is : "<<t_name<<endl;
        cout<<"age is : "<<age<<endl;
    }
};

class college : public teacher
{
    public : 
        string c_name ="Silver oak university";
    
    void display1()
    {
        cout<<"college name is : "<<c_name<<endl;
        cout<<"student  and teacher information\n";
        teacher ::display(); 
    } 
};

int main()
{
    college c;   // student  inherit ,  teacher inherit 
    c.display1();

    teacher t;   // student  inherit ,  teacher inherit
    t.display();
    return 0;
}

