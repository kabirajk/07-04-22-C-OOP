#include <iostream>
#include <cstdio>
using namespace std;
class date
{   int Date[8];
    public:
    date()
    {}
    date(string s)
    {   int start=0;
        for (int i =0;s[i];i++)
        {
            if(s[i]<=57 and s[i]>=48)
                Date[start++]=s[i]-48;
        }
    }
    friend ostream& operator<<(ostream& out,date d);
    friend istream& operator>>(istream& in,date &d);

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
istream& operator>>(istream& in,date & d)
{   
    string temp;
    in>>temp;
    
    int start=0;
        for (int i =0;temp[i];i++)
        {
            if(temp[i]<=57 and temp[i]>=48)
                d.Date[start++]=temp[i]-48;
        }
    return in;
    
}

int main()
{
    date d("31.03.2002");
    cout<<d<<endl;
    date d1;
    cout<<"enter the date";
    cin>>d1;
    cout<<d1;
return 0;
}