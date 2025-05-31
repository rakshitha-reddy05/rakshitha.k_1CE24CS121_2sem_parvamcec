#include<iostream>
#include<sstream>
using namespace std;
class Voter
{
private:
  string name;
  string gender;
  int DOB;
  string pan_num;
  string Address;
public:
    void input()
    {
     cout<<"enter person name:"<<endl;
     cin>>name;
     cout<<"enter person gender:"<<endl;
     cin>>gender;
     cout<<"Enter person DOB:"<<endl;
     cin>>DOB;
     cout<<"Enter person pan_num:"<<endl;
     cin>>pan_num;
     cin.ignore();
     cout<<"enter person address:"<<endl;
    cin>>Address;
    }
     void display()
    {
        cout<<"person name:"<<name<<endl;
        cout<<"person gender:"<<gender<<endl;
        cout<<"person DOB:"<<DOB<<endl;
        cout<<"person pan_num:"<<pan_num<<endl;
        cout<<"person Address:"<<Address<<endl;
    }
};
int main()
{
    Voter (v1);
    v1.input();
    v1.display();
    return 0;
}

