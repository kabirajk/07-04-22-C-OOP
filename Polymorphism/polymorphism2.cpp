#include <iostream>

using namespace std;

class car
{
    public:
        string Manufacturer;
        string car_model;
    car()
    {   
        Manufacturer="Unknown";
        car_model="Unknown";
    }
    car(string man,string model)
    {   
        Manufacturer=man;
        car_model=model;
    }
    car(string man,string model,int ver)
    {   
        Manufacturer=man;
        car_model=model+" V"+(char)(ver+48);
    }
    car(car &obj)
    {
        Manufacturer=obj.Manufacturer;
        car_model = obj.car_model;
    }
    void printdata()
    {
        cout<<Manufacturer<<" "<<car_model<<endl;
    }
};

int main()
{   
    car Unknown;//empty constructor
    car mahendra("mahendra","Thar");//constructor with 2 variables
    car mahendra2("mahendra","Thar",2);//constructor with 3 variables
    car exactcloning=mahendra;//constructor that copies values from one to this object
    Unknown.printdata();
    mahendra.printdata();
    mahendra2.printdata();
    exactcloning.printdata();
    return 0;
}