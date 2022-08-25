#include<bits/stdc++.h>
using namespace std;
int main(){


int n;

cout<<"enter number of elements"<<endl;
cin>>n;
 
 int a[10];
cout<<"enter elements"<<endl;

for (int i = 0; i<n; i++)
{
    cin>>a[i];
}

sort(a,a+n);

cout<<"after sorting elements are"<<endl;

for( int i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}

return 0;
}