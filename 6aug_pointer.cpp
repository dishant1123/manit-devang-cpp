/*
pointer :

1. easily manupulation of array.
2. easily manupulation of string.

decalration of  pointer : 

*p 
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     int *p;  // pointer declaration 
//     p =&a;   // intialize pointer 
//   // int  *p =&a  // pointer declaration  with initialization
//     cout<<"value of a is  :"<<a<<endl;  //10 
//     cout<<"memory address of a is  : "<<p<<endl;  //address of a :
//     cout<<"value of a using  pointer  is  :"<<*p<<endl;

//     return 0;
// }


// using  for  loop  with  pointer  :

// #include<iostream>
// using namespace std;
// int main()
// {
//     int  num,i,fact=1;
//     int *x;   // pointer declaration
//     x= &num;  // intialize pointer
//     int *q =&i;
    
//     cout<<"enter the  number  : "<<endl;
//     cin>>*x;

//     for(*q=1;*q<=*x; (*q)++)
//     {
//         fact =fact * (*q);
//     }
//     cout<<"factorial of  "<<*x<<" is  : "<<fact<<endl;
//     return  0;
// }

// array  with  pointer : 

/*
int a[5] = {1,    2,  3,     4,     5};
          a[0]  a[1]  a[2]  a[3]  a[4]
*p =a
*p[0]   *p[1]
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[5]={1,2,3,4,5},i; 
//     int *p =a;

//     *(p +3) =400; 
//     *(p +4)=500;
//     for(i=0; i<5; i++)
//     {
//         cout<<*(p +i)<<endl;
//     }
//     return 0;
// }

