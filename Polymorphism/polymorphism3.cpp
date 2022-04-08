//operator overloading
#include <iostream>

using namespace std;

class cents
{
    public:
    int cents_count;
    cents(int x)
    {
        cents_count=x;
    }
    void get_cons()
    {
        cout<<"i got "<<cents_count<<endl;
    }
};
cents operator +(cents &c1,cents &c2)//object with object
{  
     return cents(c1.cents_count+c2.cents_count);
}
cents operator +(cents &c1,int x)//object with int
{  
     return cents(c1.cents_count+x);
}
int main()
{
    cents s(1);
    cents s1(2);
    cents s2(s+s1);
    s2=s2+1;
    s2.get_cons();
return 0;
}