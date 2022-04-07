#include <iostream>
using namespace std;

class parent
{   private:
    string name="confidential";
    public:
    string garbage="NON confidential";
};
class child:public parent// {access type} {parents public values} 
{
};

int main()
{   //single inheritanmce
    /*
        A
        ^
        B
    */
    parent p;
    child c;
    cout<<c.garbage;
}