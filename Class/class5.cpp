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
    {   cout<<"enter the number: ";
        cin>>data;
    }
    void printdata()
    {
        cout<<"number"<<data<<endl;
    }
};

// class derived:public abstract_class
// {   public:
//     int data;
//     void setdata()
//     {   cout<<" enter the number: ";
//         cin>>data;
//     }
//      //if all abstract methods are not defined then it will throw error
//   
// };

int main()
{   //class with  abstract method
    derived d;
    d.setdata();
    d.printdata();
    return 0;
}