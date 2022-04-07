//deep copy
#include <iostream>

using namespace std;

class car
{
    public:
        string Manufacturer;
        string car_model;
    car(string man,string model)
    {   cout<<"Fun"<<endl;
        Manufacturer=man;
        car_model=model;
    }
    car(car &obj)
    {
        cout<<"deep copy"<<endl;
        Manufacturer=obj.Manufacturer;
        car_model = obj.car_model;
    }
    void printdata()
    {
        cout<<Manufacturer<<" "<<car_model<<endl;
    }
};

int main()
{   //deep copy
    car a("maruthi","alto");
    a.printdata();
    // car b(a);
    car b=a;//deep copy
    b.printdata();
    a.Manufacturer="renault";
    a.car_model="duster";
    a.printdata();
    b.printdata();
    return 0;
}