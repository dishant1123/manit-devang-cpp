/*
template  : 

1.function 
2 .class 
*/

/*
#include <iostream>  
using namespace std;    
// function  template  : 
template <typename T>
T add(T a, T b)
{
    return a+b; 
}
int main()
{
    cout<<"int add :"<<add(13,14)<<endl ; 
    cout<<"float add : "<<add(13.56,14.89)<<endl;
    cout<<"char add : "<<add('a','b')<<endl;
    cout<<"double add : "<<add(156121.2333344,1445567.779989)<<endl;
    return 0;
}

*/ 
// class template : 

/*
#include <iostream>
using namespace std; 
template <class t1,class t2>

void  display(t1 a , t2 b)
{
    cout<<"a : "<<a<<" b : "<<b<<endl;
}

int main()
{
    display(13,14); 
    display("hello",89); 
    display(10,13.56);
    return 0;
}

*/ 

// auto  : 

#include <iostream>
using namespace std;

template <typename T>

auto add(T a, T b)
{
    return a+b;
}

int main()
{
    cout<<"int add :"<<add(13,14)<<endl ;
    cout<<"float add : "<<add(13.56,14.89)<<endl;
    //cout<<"char add : "<<add('a','b')<<endl;
    cout<<"double add : "<<add(156121.2333344,1445567.779989)<<endl;

    string str1 = "hello";
    string str2 = "naitra";

    cout<<"value  add : "<<add(str1,str2)<<endl;

    auto  x =add(13,14);
    cout<<"auto add : "<<x<<endl;
    return 0;
}