/*
int  a[5] ={1,2,3,4,5}

structure  : use when  multiple data type store . 

ex : 
(int)    (char/string)  (int)
rollno   name           age 
1        devang         20
2        harshil        22
3        manit          21
*/

// #include <iostream>
// using namespace std;

// struct student
// {
//     int  rollno,age;
//     char name[90];
// }s1,s2;
// int main()
// {
//     //struct student s1,s2;
//     cout<<"enter rollno of student 1 :"<<endl;
//     cin>>s1.rollno;
//     cout<<"enter name of student 1 :"<<endl;
//     cin>>s1.name;
//     cout<<"enter age of student 1 :"<<endl;
//     cin>>s1.age;

//     cout<<"enter rollno of student 2 :"<<endl;
//     cin>>s2.rollno;
//     cout<<"enter name of student 2 :"<<endl;
//     cin>>s2.name;
//     cout<<"enter age of student 2 :"<<endl;
//     cin>>s2.age;

//     cout<<"rollno\tname\tage"<<endl;
//     cout<<s1.rollno<<"\t"<<s1.name<<"\t"<<s1.age<<endl;
//     cout<<s2.rollno<<"\t"<<s2.name<<"\t"<<s2.age<<endl;
//     return 0;

// }


// using  array  in structure:

#include <iostream>
using namespace std;

struct student
{
    int  rollno,age;
    char name[90];
}s[3];
int main()
{
    //struct student s1,s2;
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"enter rollno of student "<<i+1<<" :"<<endl;
        cin>>s[i].rollno;
        cout<<"enter name of student "<<i+1<<" :"<<endl;
        cin>>s[i].name;
        cout<<"enter age of student "<<i+1<<" :"<<endl;
        cin>>s[i].age;
    }
    cout<<"rollno\tname\tage"<<endl;
    for(i=0;i<3;i++)
    {
        cout<<s[i].rollno<<"\t"<<s[i].name<<"\t"<<s[i].age<<endl;
    }
    return 0;

}

/*

rollno  name    phy  che  maths  percentage
1        devang  80   90   70      87%
2        harshil 80   90   70      90%
3        manit   80   90   70      77%
4        prince  98   94   56      88%

display  : 
rollno even  information  : 

task 2: ask user to enter the rollno  and print only those  rollno which user enter.
task 3: 
srno  name         accno   balance 
1     jay          1234     1000
2     viral        4567     200
3     prince       8910     400
4     harshil      1112     1500

condition  : 
1.balance < 500   print name  

output : 
name   
viral
prince

2. balance >500   balance add money 1000 in their balance and  print  name with updated balance.
output : 
name    balance 
jay     2000 
harshil 2500
*/