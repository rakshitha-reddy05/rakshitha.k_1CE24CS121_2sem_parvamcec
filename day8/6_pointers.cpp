#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;
    int *arr=new int[size];
    for(int i=0; i<size;i++)
    {
        cout<<"Enter element:"<<endl;
        cin>>i[arr];
    }
    cout<<"element of an array:"<<endl;
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}