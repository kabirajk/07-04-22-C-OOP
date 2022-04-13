#include <iostream>
using namespace std;
class vehicle
{
    public:
    string name;
    string Model_number;
    int No_of_wheels;

    private:
    int accesskey;
    public:
    void set_data()
    {
        cout<<"please enter the name:";
        cin>>name;
        cout<<"please enter the Model number:";
        cin>>Model_number;
        cout<<"please enter the No of wheels:";
        cin>>No_of_wheels; 
    }
    void show_data()
    {
        cout<<name<<" "<<Model_number<<" "<<No_of_wheels<<" "<<endl;
    }
};

int main()
{   
    vehicle v;
    v.set_data();
    v.show_data();
    //encapsulated class(having member function and data)
    return 0;
}