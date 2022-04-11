#include <iostream>
#include <typeinfo>
using namespace std;
//static polymorpism template functin & template function overloading 
template<typename T,typename T2>
T2 add(T a,T2 b)
{   cout<<typeid(a).name()<<"|"<<a+b<<endl;
    return a+b;
}
//overloaded template function
template<class T,typename T2,typename T3>//typename or class either is ok for args type ||if different no of data types
T add(T a,T2 b,T3 c)                    // then make three different data types in genrics
{   cout<<typeid(a).name()<<typeid(b).name()<<typeid(c).name()<<"|"<<a+b<<endl;
    return a+b;
}
// template<typename T>
// T add(T a,T b)
// {   cout<<typeid(a).name()<<"|"<<a+b<<endl;
//     return a+b;
// }
// template<typename T>
//  add(T a,T b)
// {   cout<<typeid(a).name()<<"|"<<a+b<<endl;
//     return a+b;
// }

int main()
{
    // cout<<add(1,1);
    cout<<typeid(add(56.0f,1.0)).name()<<"||";
    cout<<add(56.0f,1.0)<<endl;
    cout<<typeid(add(56,1)).name()<<"||";
    cout<<add(56,1)<<endl;
    cout<<typeid(add(56.0,1)).name()<<"||";
    cout<<add(56.0,1)<<endl;
    cout<<typeid(add(56.0,1,2.0f)).name()<<"||";
    cout<<add(56.0,1,2.0f)<<endl;
    cout<<typeid(add('B','A')).name();
    cout<<add(56,'A')<<endl;
    return 0;
}
