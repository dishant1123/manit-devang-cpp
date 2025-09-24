/*
file handling  use in oop :
*/

#include <iostream>
#include <fstream>  // new  header file
#include <string>
using namespace std;

class student 
{
    private  : 
        int rollno;
        string name;
        float marks; 
    public :
        student()
        {}
        student(int rollno,string name,float marks)
        {
            this->rollno=rollno;
            this->name=name;
            this->marks=marks;
        }
        void input()
        {
            cout<<"enter rollno : ";
            cin>>rollno;
            cin.ignore(); // to ignore  the newline character
            cout<<"enter name : ";
            getline(cin,name);
            cout<<"enter marks : ";
            cin>>marks;
        }
        void  display()
        {
            cout<<"rollno : "<<rollno<<endl;
            cout<<"name : "<<name<<endl;
            cout<<"marks : "<<marks<<endl;
        }
        void writetofile()
        {
            ofstream fout("prince2.txt",ios::app);
            //fout<<"rollno"<<"\t"<<"name"<<"\t"<<"marks"<<endl;
            fout<<rollno<<"\t"<<name<<"\t"<<marks<<endl;
            fout.close();
        }
        void readfromfile()
        {
            ifstream fin("prince2.txt");
            string s1; 
            cout<<"==========STUDENT INFORMATION=========="<<endl;
            while(getline(fin,s1))
            {
                cout<<s1<<endl;
            }
            fin.close();
        }
};
int main()
{
    student s1; 
    char ch; 

    do{
        s1.input();
        s1.writetofile();

        cout<<"do you want add more data(y/n) : ";
        cin>>ch;

    }while (ch=='y');
    s1.readfromfile(); 
    return 0;
    
}