#include <iostream>
using namespace std;

class Time
{
    private:
    int HH;
    int MM;
    public:
    Time()
    {
        HH=0;
        MM=0;
    }
    Time(int hrs,int min)
    {
       HH=hrs;
       MM=min; 
    }
    void set_Time(int hrs,int min)
    {
       HH=hrs;
       MM=min; 
    }
    friend ostream & operator<<(ostream& out,Time &t);
    friend void operator+(Time &current,int x);
    
};
ostream& operator <<(ostream& out,Time &t)
{
    out.width(2);
    out.fill('0');
    out<<t.HH<<":";
    out.width(2);
    out.fill('0');
    out<<t.MM;
    return out;
}
void operator+(Time& current,int x)
{
    int totalmiutes=current.HH*60+current.MM;
    totalmiutes+=x;
    //cout<<totalmiutes;
    int hrs=totalmiutes/60;
    hrs= hrs!=24?hrs:0;
    hrs=hrs>24?hrs%24:hrs;
    current.HH=hrs;
    //cout<<totalmiutes%60;
    current.MM=totalmiutes%60;
}
int main()
{   //
    Time t;
    // t.HH=12;
    // t.MM=20;
    t.set_Time(12,20);
    cout<<t<<endl;
    t+1232;
    // cout.width(2);
    cout<<t;

}