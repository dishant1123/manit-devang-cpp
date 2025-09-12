/*
polimorpshism :  many forms of same function . 

1. method  over  loading   ==> complie  time  polymorphism
    a. function  over loading :  complie time polymorphism
    b. operator  overloading  :  complie  time  polymorphism

2 . method  overriding  ==> run time  polymorphism 
    a. virtual  function  :  run time  polymorphism

*/
// function  overloading  : 
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