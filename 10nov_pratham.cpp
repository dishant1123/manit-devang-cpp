/*
friend  funcion  : it is  not member  of call but access private  and  protected member. 

declare ==> with in  class  
friend  ==> keyword 
*/
/*
#include <iostream>
using namespace std;
class box 
{
    private  :  
        int length; 
    
    public : 
        box(int l)
        {
            length =l; 
        }
    friend void display(box b); //==> declare ==> box class name  ==> b object 
};
void  display(box b)  // friend  function  intialization 
{
    cout<<"box length is "<<b.length<<endl;
}
int main()
{
    box b(10); 
    display(b);
    return 0; 
}
*/

// protected class in friend  function  : 

#include <iostream>
using namespace std;
class student 
{
    protected :
        string name ;
        int marks; 

    public :
        student(string n, int m)
        {
            name = n;
            marks = m;
        }
    friend void display(student s);
};
class person : public student 
{
    public :
        person(string n, int a) : student(n, a)
        {
        }

};
void display(student s)
{
    cout<<"name is "<<s.name<<" and marks is "<<s.marks<<endl;
}
int main()
{
    student s("pratham", 100);
    display(s);
    return 0;
}