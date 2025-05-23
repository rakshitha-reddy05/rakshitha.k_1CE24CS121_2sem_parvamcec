#include<iostream>
using namespace std;
class bus
{
public:
   string route;
   int capacity_of_bus;
};
int main()
{
    bus b1;
    b1.route="bellary";
    b1.capacity_of_bus=50;
    cout<<"route:"<<b1.route<<endl;
    cout<<"capacity_of_bus:"<<b1.capacity_of_bus<<endl;
    return 0;
}