#include<iostream>
using namespace std;
class BankAccount
{
    //data members / properties
public:
    string holder_name;
    int ac_no;
     // constructor
    BankAccount()
    {
        cout<<"default constructor"<< endl;
        this->holder_name="raksha";
        this->ac_no=100;
    }
    BankAccount(string name
         
        int ac_no)
    {
        cout<<"constructor is called automatically"<<endl;
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
    BankAccount b1;
    BankAccount b2("vinay", 10000);
    b1.display();
    b2.display();
    return 0;
}