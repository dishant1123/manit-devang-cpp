/*
polimorpshism :  many forms of same function . 

1. method  over  loading   ==> complie  time  polymorphism
    a. function  over loading :  complie time polymorphism
    b. operator  overloading  :  complie  time  polymorphism

2 . method  overriding  ==> run time  polymorphism 
    a. virtual  function  :  run time  polymorphism

*/
// function  overloading  : 
/*
#include<iostream>
using namespace std;
class calculator
{
    public : 
        int add(int a,int b)
        {
            return a+b;
        }
        double add(double a,double b,double c)
        {
            return a+b+c;
        }
        int add(int a,int b,int c,int d)
        {   
            return a+b+c+d;
        }
};  
int main()
{
    calculator c1; 

    cout<<c1.add(90,12)<<endl; 
    cout<<c1.add(1,2,3)<<endl;
    cout<<c1.add(1,2,3,4)<<endl;
    return 0;
}
*/

// operator  overloading  : 
/*
operator  : + - * / %  < > <= >= == != 
*/
#include<iostream>
using namespace std;
class calculator
{
    public : 
        int num1 ; 

    calculator(int num1)
    {
        this->num1=num1;
    }
    calculator operator+(const calculator &c1)
    {
        return calculator(num1+c1.num1);
    }
    calculator operator-(const calculator &c1)
    {
        return calculator(num1-c1.num1);
    }
    calculator operator*(const calculator &c1)
    {
        return calculator(num1*c1.num1);
    }
    void display()
    {
        cout<<"num1 : "<<num1<<endl;
    }
};
int main()
{
    calculator c1(10),c2(20); 
    calculator result =c1+c2;
    calculator result1 =c1-c2;
    calculator result2 =c1*c2;
    cout<<"addition :";result.display();
    cout<<"diff :";result1.display();
    cout<<"mul :";result2.display();
    return 0;
}
