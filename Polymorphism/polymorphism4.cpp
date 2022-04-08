#include <iostream>
using namespace std;

class time
{
    private:
    int HH;
    int MM;
    public:
    time()
    {
        HH=0;
        MM=0;
    }
    time(int hrs,int min)
    {
       HH=hrs;
       MM=min; 
    }
    void set_time(int hrs,int min)
    {
       HH=hrs;
       MM=min; 
    }
    friend ostream & operator<<(ostream& out,time &t);
    friend time operator+(time &current,int x);
    
};
ostream& operator <<(ostream& out,time &t)
{
    out.width(2);
    out.fill('0');
    out<<t.HH<<":";
    out.width(2);
    out.fill('0');
    out<<t.MM;
}
time operator+(time& current,int x)
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
    time t;
    // t.HH=12;
    // t.MM=20;
    t.set_time(12,20);
    cout<<t<<endl;
    t+1232;
    // cout.width(2);
    cout<<t;

}