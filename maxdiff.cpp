#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<" enter elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int max;
    max=a[0]-a[n-1];
    cout<<"max difference is"<<max;

    

return 0;
}