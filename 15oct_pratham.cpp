
/*
multiple  :                                 multi level 
 
class a   : base class                                   class a :

class b :   base class                                class b : public a   

class c : public a , public b                        class c :public b
*/
// hierarchy level of  inheritance  : multiple derived class inheirt  from same base class .

/*
class parent  

class child1 : public parent 

class child2 : public parent 
*/
#include<iostream>
using namespace std;
class parent 
{
    private : 
        string name ="ramesh bhai"; 
        int age =40;

    public :
        void show()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
        }
};
class child : public parent 
{
    public : 
        string c_name ="rohit"; 
        int c_age= 20;
    void display()
    {
        cout<<"PARENT INFORMATION\n";
        parent ::show(); 
        cout<<"CHILD INFORMATION\n";
        cout<<"name is : "<<c_name<<endl;
        cout<<"age is : "<<c_age<<endl;
    } 
};
class child2 : public parent 
{
    public : 
        string c1_name ="keya";
        int c1_age= 15;
    void display()
    {
        cout<<"PARENT INFORMATION\n";
        parent ::show(); 
        cout<<"CHILD INFORMATION\n";
        cout<<"name is : "<<c1_name<<endl;
        cout<<"age is : "<<c1_age<<endl;
    }
    
};
int main()
{
    child c;  // child inherit  from parent
    c.display(); 

    child2 c1; //child 2 inherit  from parent
    c1.display();
    return 0;
}