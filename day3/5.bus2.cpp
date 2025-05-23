#include<iostream>
using namespace std;
class Bus
{
    //data members / properties
public:
    string route;
    int capacity_of_bus;
     // constructor
    Bus (string route, int capacity_of_bus)
    {
        cout<<"constructor is called automatically"<< endl;
        this->route=route;
        this->capacity_of_bus=capacity_of_bus;
    }
    void display()
    {
        cout<<"route:"<< this->route<< endl;
        cout<<"capacity_of_bus:"<<this->capacity_of_bus<< endl;
    }
};
int main()
{
    Bus b1("bellary", 50);
    b1.display();
    return 0;
}
