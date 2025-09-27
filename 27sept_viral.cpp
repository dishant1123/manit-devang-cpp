/*
function  : 

1. no argument no return value
2. with argument no return value
3. no argument with return value
4. with argument with return value
*/

// 1. no argument no return value
/*
#include <iostream>
using namespace std;
void sum() // void  data type  sum () ==> func name 
{
    int a,b,c; 
    cout<<"enter two numbers"<<endl; // fun intial 
    cin>>a>>b;
    c=a+b;
    cout<<c<<endl;
}
int main()
{
    sum(); // func call 
    return 0;
}
*/
// 2. with argument no return value
/*
#include <iostream>
using namespace std;
void sum(int a ,int b ) // void  data type  sum () ==> func name 
{   
    int c;
    c=a+b;
    cout<<c<<endl;
}
int main()
{
    int a,b; 
    cout<<"enter two numbers"<<endl; 
    cin>>a>>b;
    
    sum(a,b); // func call 
    return 0;
}
*/
// 3 : no argument with return value
#include <iostream>
using namespace std;
int sum( ) // void  data type  sum () ==> func name 
{   
    int a,b,c; 
    cout<<"enter two numbers"<<endl; 
    cin>>a>>b;
    
    c=a+b;
    return c; 
}
int main()
{
    
    cout<<sum(); // func call 
    return 0;
}
