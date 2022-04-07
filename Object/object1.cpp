#include <iostream>
using namespace std;

int Roll_count=1;
class student
{
    public:
    
    int Roll_no;
    string name;
    int grade;
    char div;
    
    student()
    {
        cout<<"please enter the name:";
        cin>>name;
        cout<<"please enter the grade/class:";
        cin>>grade; 
        cout<<"please enter the div:";
        cin>>div;
        Roll_no=Roll_count;
        Roll_count+=1;
    } 
    void printdata()
    {
        cout<<"roll no:"<<Roll_no<<" Name :"+name<<" Class="<<grade<<":"<<div<<endl;
    }
};

/*
equivalent structure
struct student
{
    int Roll_no;
    string name;
    int grade;
    char div;
}*/
int main()
{
    //class with data members only'
    //object creation
    //instantiation
    student s;
    //printing data
    s.printdata();
    return 0;
}