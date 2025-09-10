/*
polimorphism  : many forms of same function. 

1. method  over loading  
2. method  overriding

*/
// function  over loading :  complie time polymorphism 
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
    cout<<c1.add(12,12)<<endl;
    cout<<c1.add(12,13,14)<<endl;
    cout<<c1.add(12,13,14,15)<<endl;
    return 0; 

}
*/ 

#include<iostream>
using namespace std;
class calculator
{
    public : 
        int real , imag; 
    
    calculator(int r=0 ,int i=0)
    {
        real=r;
        imag=i;
    }
    // operator overloading + - * / % 

    calculator operator +(const calculator &c1)
    {
        calculator result ; 
        result.real=real+c1.real;
        result.imag=imag+c1.imag;
        return result;
    }
    void display()
    {
        cout<<"real : "<<real<<" imag : "<<imag<<endl;
    }
};

int main()
{
    calculator c1(3,4),c2(5,6);

    calculator result =c1+c2; 

    cout<<"c1 :="; 
    c1.display();
    cout<<"\nc2 :=";
    c2.display();
    cout<<"c1 +c2 :=";
    result.display();
    return  0;
}