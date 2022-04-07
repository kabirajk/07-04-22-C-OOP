#include <iostream>
using namespace std;
class id_card
{   public:
    string name;
    string age;
    string address;
    string bloodgroup;
    string phonenumber;

    void setdata()
    {
        cout<<"please enter the name:";
        cin>>name;
        cout<<"please enter the age:";
        cin>>age;
        cout<<"please enter the address:";
        cin>>address; 
        cout<<"please enter the Blood group:";
        cin>>bloodgroup;
        cout<<"please enter the phonenumber:";
        cin>>phonenumber;
    }

    void show_data()
    {
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"address = "<<address<<endl;
        cout<<"bloodgroup = "<<bloodgroup<<endl;
        cout<<"phone number = "<<phonenumber<<endl;
    }
};

class employee:public id_card
{
    public:
    string designation; 
    void setdata()
    {
        id_card::setdata();
        cout<<"please enter the designation: ";
        cin>>designation;
    }
    void show_data()
    {
        id_card::show_data();
        cout<<"designation = "<<designation<<endl;
    }
}; 

class student:public id_card
{
    public:
    string Class;
    void setdata()
    {
        id_card::setdata();
        cout<<"please enter the student's class/grade:";
        cin>>Class;
    }

    void show_data()
    {
        id_card::show_data();
        cout<<"Class = "<<Class<<endl;
    }
    
};
int main()
{   //class with inheritance


    // employee e;
    // e.setdata();
    // e.show_data();
    // student s;
    // s.setdata();
    // s.show_data();
    
    return 0;
}

