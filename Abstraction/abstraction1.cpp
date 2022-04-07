#include <iostream>
using namespace std;
//abstaction
class computers
{   public:
    virtual bool can_it_game()=0;
    virtual bool is_it_portable()=0;
};

class personal_computer:public computers
{
    public:
    bool can_it_game()
    {
        cout<<"Yes"<<endl;
        return true;
    }
    bool is_it_portable()
    {
        cout<<"No";
        return false;
    }
    
};
class Laptop:public computers
{   public:
    bool can_it_game()
    {
        cout<<"Yes";
        return true;
    }
    bool is_it_portable()
    {
        cout<<"Yes";
        return true;
    }
    
};

int main()
{
    Laptop i5;
    i5.is_it_portable();
    personal_computer i6;
    i6.is_it_portable();
    return 0;
}

// class Bird
// {   private:
//     string name;

//     public:
//     Bird()
//     {//implenent to set name by passing the name on paranthesis}
//     void Set_bird_name()
//     {   
//         cout<<"enter the name:";
//         getline(cout,name);
//     }
//     void printname( )
//      {
//          cout<<name<<endl;
//      }   
    
// }
