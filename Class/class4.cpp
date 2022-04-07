#include <iostream>

using namespace std;

class Booking_counter
{   public:
    static int count;

    Booking_counter()
    {
        count+=1;
        cout<<"Order placed"<<count<<endl;
    }
    ~Booking_counter()
    {
        cout<<"Order delivered"<<count<<endl;
    }
};
int Booking_counter::count=0;

int main()
{   //class with constructor and destructor

    Booking_counter b1;
    Booking_counter b2;
return 0;
}