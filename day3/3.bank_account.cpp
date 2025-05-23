#include<iostream>
using namespace std;
class bankaccount
{
    //data members / properties
public:
    string holder_name;
    int ac_no;
     // constructor
     bankaccount()
    {
         cout<<"constructor is called automatically"<<endl;
    }
};
int main()
{
    bankaccount b1;
    return 0;
}
