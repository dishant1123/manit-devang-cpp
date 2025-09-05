// double  pointer  decalration  : 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10; 
//     int  *p =&a;   // pointer declaration with initialization
//     int **q=&p;  // double pointer declaration
//     cout<<"value of a is  :"<<a<<endl;  //10
//     cout<<"memory address of a is  : "<<p<<endl;  //address of a :
//     cout<<"value of a using  pointer  is  :"<<*p<<endl;  // 10 

//     cout << "value  of a using  double  pointer  is  : "<<**q<<endl;
//     return  0;
// }


// pointer  with  function call by reference :

// # include<iostream>
// using namespace std;
// void fun(int *p)
// {
//     *p =100+*p;
// }
// int main()
// {
//     int a =90 ;
//     //int *p =&a;
//     fun(&a); // call  by reference
//     cout<<"value of a is  : "<<a<<endl;
//     return 0;
// } 


// pointer  with string  : 

#include<iostream>
using namespace std;
int main()
{
    char p[] = "hello";
    cout<<"value of p is  : "<<p<<endl;
    // cout<<"value of p[0] is  : "<<p[0]<<endl;
    // cout<<"value of p[1] is  : "<<p[1]<<endl;
    // cout<<"value of p[2] is  : "<<p[2]<<endl;

    cout << "after changing value  :  " << endl;
    *(p + 2) = 'a';  // or p[2] = 'a';
    cout << "value of p[2] is  : " << p[2] << endl;
    cout << "new value of p is  : " << p << endl;


    return 0;
}

/*

char s1[40] = "hello my name is  ram."
*/