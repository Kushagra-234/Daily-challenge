#include<bits/stdc++.h>
using namespace std;

 int rotatebyd(int a[],int d,int n)
{

    // reverse(a,a+n);
    reverse(a,a+n-d-1);
    reverse(a,a+n);

    return 0;
}

int main()
{
    int n;
    int a[n];
    cout<<"enter number of elements "<<endl;
    cin>>n;
    int d;
    cout<<"enter factor "<<endl;
    cin>>d;
    cout<<"enter elements of array"<<endl;
    // int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>n;
    }
    cout<<"array after rotation by d is"<<rotatebyd(a,d,n);
    


}

