#include <iostream>
using namespace std;
int main()
{
    int arr[8]={8,17,6,5,13,2,1};
    int *ptr=arr;
    int evenCount=0,oddCount=0;
    for(int i=0;i<7;i++)
    {
        if((i[ptr]%2)==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    cout<<"Even cout:"<<evenCount<<endl;
    cout<<"odd cout:"<<oddCount<<endl;
}