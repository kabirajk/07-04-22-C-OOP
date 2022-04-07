#include <iostream>
using namespace std;

class A
{   public:
   virtual void this_isfrom_A()
    {
        cout<<"this is A"<<endl;
    } 
};
class B:virtual public A//if A things present it will not show ambiguity error
{   public:
    void this_isfrom_B()
    {
        cout<<"this is B"<<endl;
    }
};

class C:virtual public A
{   public:
    void this_isfrom_C()
    {
        cout<<"this is C"<<endl;
    }
};

class D:public C, public B
{
    public:
    void this_isfrom_D()
    {
        cout<<"this is D"<<endl;
    }

};

int main()
{   
    /*//due to A's things are inherited to B & C this shows ambiguity while using A things
        A
       / \
      B   C
       \ /
        D
    */

    D d;
    d.this_isfrom_A();
    d.this_isfrom_B();
    d.this_isfrom_C();
    d.this_isfrom_D();   
    return 0;
}