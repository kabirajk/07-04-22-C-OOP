#include <iostream>
#include <cstdio>
using namespace std;
class date
{   int Date[8];
    public:
    date():{}
    date(string s)
    {   int start=0;
        for (int i =0;s[i];i++)
        {
            if(s[i]<=57 and s[i]>=48)
                Date[start++]=s[i]-48;
        }
    }
    friend ostream& operator<<(ostream& out,date d);
    friend istream& operator>>(istream& in,date d);

};

ostream& operator<< (ostream& out,date d)
{
    for(int i=0;i<8;i++)
    {   if (i==2 || i==4)
            out<<":";
        out<<d.Date[i];
    }
    return out;
}



int main()
{
    date d("31.03.2002");
    cout<<d;
    date d1;
    cin>>d;
return 0;
}