// multi ple  inheritance :  
// #include <iostream>
// using namespace std;
// class vehicle 
// {
//     private : 
//         string v_name;
//     public : 
//         string v_color;
//         int v_year;
//     vehicle(string v_name,string v_color,int v_year)
//         {
//             this->v_name =v_name; 
//             this->v_color=v_color;
//             this->v_year=v_year;
//         }
//     void vehicleinfo()
//     {
//         cout<<"vehicle name : "<<v_name<<endl;
//         cout<<"vehicle color : "<<v_color<<endl;
//         cout<<"vehicle year : "<<v_year<<endl;
//     }
// };
// class car 
// {
//     private :
//         string c_name ="audi";
//     public : 
//         string model; 
//         int year;
//     car()
//     {
//         model="A3";
//         year=2020;
//     }
//     void carinfo()
//     {
//         cout<<"car name : "<<c_name<<endl;
//         cout<<"car model : "<<model<<endl;
//         cout<<"car year : "<<year<<endl;
//     }
// };

// class truck : public vehicle,public car
// {
//     private :
//         int capacity ; 
//     public :
//         truck(string v_name,string v_color,int v_year,int capacity) : vehicle(v_name,v_color,v_year),car()
//         {
//             this->capacity=capacity;
//         }
//     void truckinfo()
//     {
//         vehicleinfo();
//         carinfo();
//         cout<<"truck capacity : "<<capacity<<endl;
//     }
// };
// int main()
// {
//     truck t("bike","red",2020,10000);
//     t.truckinfo();
//     return 0;
// }

    
// 2 : 

#include <iostream>
using namespace std;
class vehicle 
{
    protected :     
        string name;  //  it is  accessible  to derived class
        string color;
        int year; 

    vehicle(string name,string color,int year)
    {
        this->name=name;
        this->color=color;
        this->year=year;
    }
    void display()
    {
        cout<<"vehicle name : "<<name<<endl;
        cout<<"vehicle color : "<<color<<endl;
        cout<<"vehicle year : "<<year<<endl;
    }
};

class engine 
{
    private :
        int horse_power; 
    
    public :
    engine(int hp)
    {
        horse_power=hp;
    }
    void  display_hp()
    {
        cout<<"horse power : "<<horse_power<<endl;
    }
};

class car : public vehicle,public engine 
{
    protected :
        string model;
    public :
    car(string model,string name,string color,int year,int hp) : vehicle(name,color,year),engine(hp)
    {
        this->model=model;
    }
    void display_car()
    {
        cout<<"======car_info=========\n"; 
        display();
        display_hp();
        cout<<"car model : "<<model<<endl;
    }
};   

class truck :public vehicle,public engine
{
    private :
        int capacity ;
    public :
    truck(string name,string color,int year,int hp,int capacity) : vehicle(name,color,year),engine(hp)
    {
            this->capacity=capacity;
    }

    void display_truck()
    {
        cout<<"======truck_info=========\n"; 
        display();
        display_hp();
        cout<<"truck capacity : "<<capacity<<endl;
    }
};

int main()
{
    int n; 
    cout<<"enter the number of cars : "; 
    cin>>n; 

    for(int i=0; i<n; i++)
    {
        cout<<"enter the detalis of car : "<<i+1<<"\n";
        string name,color,model;
        int year,hp;
        cout<<"enter the name of car : ";
        cin>>name;
        cout<<"enter the color of car : ";
        cin>>color;
        cout<<"enter the year of car : ";
        cin>>year;
        cout<<"enter the horse power of car : ";
        cin>>hp;
        car c(model,name,color,year,hp);
        c.display_car();
    }
    return 0;
}


/*

class    student : 
class     marks : 
class clg : student marks 
class exam :  student marks 

*/

