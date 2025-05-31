#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int roll_num;
public:
    void input()
    {
                cout<<"Enter student roll_num:"<<endl;
        cin>>roll_num;
        cout<<"enter student name:"<<endl;
        cin>>name;

    }
    void display()
    {
        cout<<" student name:"<<name<<endl;
        cout<<"student name:"<<roll_num<<endl;
    }
};
int main()
{
    student students[3];
    for(int i=0;i<3;i++)
    {
        students[i].input();
        students[i].display();
    }
    return 0;
}




