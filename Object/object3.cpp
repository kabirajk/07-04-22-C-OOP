#include <iostream>

using namespace std;

class abstract_class
{   public:
    //when a virtual function is assigned as zero then the next inheriting class has to give the definition for it self
    virtual void setdata()=0;
    virtual void printdata()=0;
};

class derived:public abstract_class
{   public:
    int data;
    void setdata()
    {   cout<<"senter the number: ";
        cin>>data;
    }
    void printdata()
    {
        cout<<"number"<<data<<endl;
    }
};

int main()
{   //creating object from abstract method class inherited class
    derived d;
    d.setdata();
    d.printdata();
    return 0;
}