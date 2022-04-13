#include <iostream>

using namespace std;

class cred
{  
    public:
    string username;
    string password;
    cred()
    {
        cout<<"enter the user name: ";
        cin>>username;
        cout<<"enter the password: ";
        cin>>password;
    }
};
class login
{   private:
    cred * login_list[3];
    int last_id=0;
    void auth_cred()
    {
        string un;
        string pw;
        cout<<"\nenter the username:";
        cin>>un;
        cout<<"\nenter the password:";
        cin>>pw;
        int flag=1;
        for (int i=0;i<3;i++)
        {
            if(un==login_list[i]->username)
                if(pw==login_list[i]->password)
                    {cout<<"success";
                    flag=1;
                    break;}
                else cout<<"invalid";
            else flag=0;
        }   
        if (flag==0)
            cout<<"invalid";
    }
    public:
    void add_cred()
    {   cout<<"called";
        if (last_id==3)return;
        login_list[last_id]= new cred();
        last_id+=1;
    }
    void Login()
    {
        auth_cred();
    }
};
int main()
{   
    login l;
    l.add_cred();
    l.Login();
    return 0;
}