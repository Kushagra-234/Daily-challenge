#include <iostream>

using namespace std;


int main()
{

    int a[5],i,j;
    cout<<"enter elements of array"<<endl;

    for(i=0; i<5 ;i++)
    {
        cin>>a[i];
    }
    


    for( int i=4;i>=0;i--)

    {
        a[i]=a[j];

    }
    cout<<a[j];
}