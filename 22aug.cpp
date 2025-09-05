/*
multi ple inheritance :  vs  multi level  : 
class a                     class grandparent 

class b                     class parent (grandparent)
  
class c:  a,b               class child (parent)
*/

#include <iostream>
using namespace std;
class father 
{
    public  :
        string f_name; 
    public :

        father(string f_n)
        {
            f_name=f_n; 
        }
        void fatherinfo()
        {
            cout<<"i am father"<<endl;
            cout<<"father name is  : "<<f_name; 
        }
};
class mother
{
    public : 
        string m_name; 
    public :

        mother(string m_n)
        {
            m_name=m_n; 
        }
        void motherinfo()
        {
            cout<<"i am mother"<<endl;
            cout<<"mother name : "<<m_name; 
        }
};
class child : public father,public mother
{
    public : 
        string c_name; 
    public :

        child(string f_n ,string m_n ,string c_n) : father(f_n),mother(m_n)
        {
            c_name =c_n;
        }
        void childinfo()
        {
            cout<<"i am child"<<endl;
            cout<<"child name : "<<c_name;
        }
}; 
int main()
{
    child c("ramesh","ramila","raju"); 
    c.childinfo();
    c.fatherinfo();
    c.motherinfo();
    return 0;
}