#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("1_file_handling.txt");
    fout<<"wel-come to CSE branch\n";
    fout.close();
    cout<<"file is closed"<<endl;

    ifstream fin("1_file_handling.txt");
    string line;
    while (getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
}

