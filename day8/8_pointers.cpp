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
        cout<<"enter student name:"<<endl;
        cin>>name;
        cout<<"Enter student roll_num:"<<endl;
        cin>>roll_num;
    }
    void display()
    {
        cout<<" student name:"<<name<<endl;
        cout<<"roll num:"<<roll_num<<endl;
    }
};
int main()
{
    student *students[2];
    for(int i=0;i<5;i++)
    {
        for(int i=0;i<5;i++)
        students[i].display();
    }
    delete[]Students;
    return 0;
}




