/*
file handling  : 

txt  3 mode  : 
1.read mode  :  exiting  open 
2.write mode :  new  file create , write  ===> exiting  open  ==> overwrite 
3.append  mode : new  file create , write  ===> exiting  open  ==> append

ifstream : read from file  (input)
ofstream : write  to file  (output) 
fstream : read +write from file  (input+output)
*/
// write  mode  :

/*
#include <iostream>
#include <fstream>

using namespace std; 

int main()
{
    ofstream outfile("naitra.txt");
    if (!outfile)
    {
        cout<<"file not found"<<endl;
        return 0; 
    }
    
        outfile<<"hello naitra"<<endl;
        outfile<<"i am naitra"<<endl;
        outfile<<"i live in dubai"<<endl;
        outfile<<"study in ROYAL."<<endl;
        outfile.close();
        cout<<"file created and successfully written"<<endl;
        return 0;
}
*/
// read mode : 

/*
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile("harsh.txt");
    string  line;
    if (!infile)
    {
        cout<<"file not found"<<endl;
        return 0; 
    }
    while (getline(infile,line))
    {
            cout<<line<<endl;
    }
    infile.close();
    cout<<"file read successfully"<<endl;
    return 0;
    
}
    */

// append mode :

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("prince.txt",ios::app); 

    file<<"my best friend name is  harshil"<<endl;
    file<<"live in gandhinagar."<<endl;

    file.close();
    cout<<"file appended successfully"<<endl;
    return 0;

}