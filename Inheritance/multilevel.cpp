#include <iostream>
using namespace std;

class parentlevel1
{
    public:
    void levl1()
    {
        cout<<"levl1"<<endl;
    }
};
class parentlevel2:public parentlevel1
{
    public:
    void levl2()
    {
        cout<<"levl2"<<endl;
    }
};
class parentlevel3 : public parentlevel2
{
    public:
    void levl3()
    {
        cout<<"levl3"<<endl;
    }
};
class parentlevel4 : public parentlevel3
{
    public:
    void levl4()
    {
        cout<<"levl4"<<endl;
    }
};
class parentlevel5 : public parentlevel4
{
    public:
    void levl5()
    {
        cout<<"levl5"<<endl;
    }
};

int main()
{   //multilevl inheritance
    /*  A
        ^
        B
        ^
        C
        ^
        D
    */
    parentlevel5 p5;
    p5.levl1();
    p5.levl2();
    p5.levl3();
    p5.levl4();
    p5.levl5();
}