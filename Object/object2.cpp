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
    
    void setdata()
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

int main()
{   int no_of_students=3;
    //array of students object
    student list[no_of_students];
    
    for(int i=0;i<no_of_students;i++)
        {list[i].setdata();
        cout<<endl;}
    for(int i=0;i<no_of_students;i++)
        {list[i].printdata();
        cout<<endl;}
return 0;
}