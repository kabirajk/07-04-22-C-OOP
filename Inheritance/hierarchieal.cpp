#include <iostream>
using namespace std;

class A
{   public:
    void this_isfrom_A()
    {
        cout<<"this is A"<<endl;
    } 
};
class B:public A
{   public:
    void this_isfrom_B()
    {
        cout<<"this is B"<<endl;
    }
};

class C:public A 
{   public:
    void this_isfrom_C()
    {
        cout<<"this is C"<<endl;
    }
};

int main()
{   //Hierarcheial inheitance
    /*
          A
         / \
        B   C
       / \  / \
      D   E F  G
    */
    B clsB;
    clsB.this_isfrom_A();
    clsB.this_isfrom_B();
    C clsC;
    clsC.this_isfrom_A();
    clsC.this_isfrom_C();
    return 0;
}