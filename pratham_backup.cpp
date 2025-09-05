/*
cpp : object  oriented programming   

class  : blue  print  of  object 

object : instance of  class 

ex: 

fruit   ==> class 
    apple   banana  orange  kiwi  chiku  ==>  object   ==>class fruits 

class 3 type  : 
    1. public  :can access  all  member  function  and  member  variable
    2. private :within  class only  can access  member  function  and  member  variable
    3. protected :within  class  and  its  derived  class  can access  member  function    and  member  variable
*/
// #include<iostream>
// using namespace std;
// class fruits 
// {
//     public : 
//         string name ="apple";   // name ==> class data  member 
//         int price =100;        // price ==> class data  member
// }; 
// int main()
// {
//     fruits f;   // fruits  class ==> f ==> obj 
//     f.name ="kiwi";  //chage  the  public  data  member  of  fruits  class
//     f.price =200;
//     cout<<"fruits name is  : "<<f.name<<endl;
//     cout<<" price is : "<<f.price<<endl;
//     fruits f2; 
//     f2.name ="banana";
//     f2.price =30;
//     cout<<"fruits name is  : "<<f2.name<<endl;
//     cout<<" price is : "<<f2.price<<endl;
//     return  0;
// }


#include<iostream>
using namespace std;
class person 
{
    private : 
        string name ="pratham"; 
        int age =17; 
    public : 
        void show()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
        }
};

int main()
{
    person p ;
    p.show();
    return 0 ;
}