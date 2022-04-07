#include <iostream>
using namespace std;

class A
{   public:
    void this_isfrom_A()
    {
        cout<<"this is A"<<endl;
    } 
};
class B
{   public:
    void this_isfrom_B()
    {
        cout<<"this is B"<<endl;
    }
};

class C:public B,public A//the order of inheriting is right->left some class contains same things to avoid conflict use "virtual {access type} {class} 
{   public:
    void this_isfrom_C()
    {
        cout<<"this is C"<<endl;
    }
};

int main()
{   //multiple inheitance
    /*
        A   B
        \   /
         \ /
          C
    */
    C cls;
    cls.this_isfrom_A();
    cls.this_isfrom_B();
    cls.this_isfrom_C();
    return 0;
}