#include <iostream>
//object slicing or upcasting
using namespace std;

class parent
{   public:
    virtual void whichclass()
    {
        cout<<"parent"<<endl;
    }
};
class child :public parent
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
return 0;
}