/*
file  handling : 

3 mode file  open  : 

1. read 
2. write
3. append

ofstream ==>writing to file 
ifstream ==> reading from file
fstream ==> both reading and writing to file

*/

// write  to file  : 

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
    fout<<"hello prince.\n"<<endl;
    fout<<"live in ahmedabad.\n"<<endl;
    fout<<"food lover.\n"<<endl;
    fout<<"garba lover.\n "<<endl;
    cout<<"file written successfully"<<endl;
    fout.close();
    return 0;

}