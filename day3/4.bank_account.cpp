#include<iostream>
using namespace std;
class BankAccount
{
    //data members / properties
public:
    string holder_name;
    int ac_no;
     // constructor
     BankAccount(string name, int ac_no)
    {
        cout<<"constructor is called automatically"<< endl;
        this->holder_name=name;
        this->ac_no=ac_no;
    }
    void display()
    {
        cout<<"holder name:"<< this->holder_name<< endl;
        cout<<"account number:"<<this->ac_no<< endl;
    }
};
int main()
{
    BankAccount b1("sakshi", 123);
    b1.display();
    return 0;
}
