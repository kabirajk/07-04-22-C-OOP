#include <iostream>
using namespace std;
class id_card
{   
    string Name;
    string Desigination;
    string Employee_id
    id_card(string name,string desigination,string employee_id)
    {
        Name=name;
        Desigination=desigination;
        Employee_id=employee_id;
    }
    friend organisation::generateid();
};
class organisation
{   string Name;
    public:
    organisation(const string & name)
    {
        Name=name;
    }
    ~organisation()
    {
        free();
    }
    generateid();
    {
        id_card * i=new id_card(string name,string desigination,string employee_id);
    }
}
class permanent_id_card:public id_card
{   
    public:
    permanent_id_card()
    {
        
    }
    bool putattandance()
    {   
        cout<<"marked for today"<<employee_id<<endl;
    }
}

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

