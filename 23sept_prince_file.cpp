/*
file  handling : 

3 mode file  open  : 

1. read 
2. write
3. append

ofstream ==>writing to file 
ifstream ==> reading from file
fstream ==> both reading and writing to file


ios :: out ==> write  mode 
ios :: in ==> read mode
ios :: app ==> append mode
*/

// write  to file  : 

/*
#include <iostream>
#include <fstream>  // new  header file  
using namespace std;

int main()
{
    ofstream fout("prince.txt"); 
    if(!fout)
    {
        cout<<"file not found"<<endl;
        return 0;
    }
    fout<<"hello prince."<<endl;
    fout<<"live in ahmedabad."<<endl;
    fout<<"food lover."<<endl;
    fout<<"garba lover."<<endl;
    cout<<"file written successfully"<<endl;
    fout.close();
    return 0;

}
*/

// read from  file  : 
/*
#include <iostream>
#include <fstream>  // new  header file
#include <string>  
using namespace std;

int main()
{
    string  s1; 
    ifstream fout("prince.txt");

    if(!fout)
    {
        cout<<"file not found"<<endl;
        return 0;
    }
    while (getline(fout,s1))
    {
        cout<<s1<<endl;
    }
    fout.close();
    return 0;
}
*/

// append to file :

#include <iostream>
#include <fstream>  // new  header file
using namespace std;
int main()
{
    fstream fout("prince.txt",ios::app);
 
    if(!fout)
    {
        cout<<"file not found"<<endl;
        return 0;
    }
    fout<<"born in palanpur."<<endl;
    fout<<"study in sabermati clg."<<endl;
    cout<<"file appended successfully"<<endl;
    fout.close();
    return 0; 
}