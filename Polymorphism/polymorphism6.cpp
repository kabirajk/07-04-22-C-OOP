#include <iostream>
using namespace std;
//object slicing or upcasting in fucntion args
class Human
{   
    protected:
    string Name;
    Human(string name)
    {
        Name=name;
    }
    public:
    //string get_name() //output:base func's get_name and gender get executed
    virtual string get_name()//output : dervied or base func's get_name and gender get executed
    {
        return Name;
    }
    // string gender()//output:base func's get_name and gender get executed
    virtual string gender()//output : dervied or base func's get_name and gender get executed
    {
        return "Undefined";
    }
    friend void getgender(Human & human);
};

class Male: public Human
{   
    public:
    Male(string name):Human(name){};//calling super class
    
    string gender()
    {
        return "Male";
    }
    friend void getgender(Human & human);
    
};

class Female:public Human
{   
    public:
    Female(string name):Human(name){};//calling super class
    string gender()
    {
        return "Female";
    }
    friend void getgender(Human & human);

};
//upcasting or object slicing even happens in function or class arguments
void getgender(Human & human)//geting derived or child object using parent or base class ref(pointer also works the same way)
{//so the polymorphism happens the instead of obj's ->(derived or child) function the pointer/reference invokes the parent or base class function  
   cout<<human.get_name()<<human.gender()<<endl;
}

int main()
{   
    Male M("jiriya");
    Female F{"Tsunade"};//{"tsunade"} scalar object
    getgender(M);
    getgender(F);

    return 0;
}