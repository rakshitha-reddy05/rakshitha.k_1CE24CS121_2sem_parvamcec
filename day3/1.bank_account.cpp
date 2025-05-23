#include<iostream>
using namespace std;
class bankaccount
{
public:
    string holder_name;
    int ac_no;
};
int main()
{
    bankaccount b1;
    b1.holder_name= "sakshi";
    b1.ac_no = 101;
    cout<<"holder name:"<<b1.holder_name<<endl;
    cout<<"account number:"<<b1.ac_no<<endl;
    return 0;
}
