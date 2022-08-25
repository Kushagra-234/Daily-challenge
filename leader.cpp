#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    // int max=a[n-1];
    cout<<"enter number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int maxi=0;

    for (int i = n-1; i >=0; i--)
    {
        if (a[i]>maxi);
        maxi=a[i];
        
    }
    cout<<maxi;
    

return 0;
}