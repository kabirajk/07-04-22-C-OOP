#include <iostream>
//object slicing or upcasting
using namespace std;

class parent
{   public:
    virtual   void whichclass()
    {
        cout<<"parent"<<endl;
    }
};
class child : public parent
{   public:
    void whichclass()
    {
        cout<<"child"<<endl;
    }
};

int main()
{
    child c;
    parent *p=&c;
    p->whichclass();
    //during runtime the the object is not get into account so without virtual in the parent 
    //the object wont invokes its function instead parrent get invoked
return 0;
}