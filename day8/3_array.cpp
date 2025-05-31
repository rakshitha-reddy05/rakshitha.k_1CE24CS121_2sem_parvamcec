#include <iostream>
using namespace std;
int main()
{
   int arr[3]={10, 20, 30};
   cout<<"print arr:"<< arr << endl;
   cout<< "Address of 1 ele:" <<&arr[0]<<endl;
   cout <<"value:"<<*(arr+1)<<endl;
   int *ptr=arr;
   cout<<"value using pointer:"<<*(ptr+2)<<endl;
   //*(ptr+1)=*(ptr+1)*2;
   *(arr+1)=*(arr+1)*2;
   cout<<"after:"<<arr[1]<<endl;
   ptr=&arr[1];
   ptr++;
   ptr=arr;
   cout<<"value:"<<*ptr<<endl;
   cout<<"First element:"<<arr[0]<<endl;
   cout<<"First element:"<<*(arr+0)<<endl;
   cout<<"First element:"<<*(ptr+0)<<endl;
   cout<<"First element:"<<ptr[0]<<endl;
   cout<<"First element:"<<0[ptr]<<endl;
   cout<<"First element:"<<0[ptr]<<endl;
   return 0;
}