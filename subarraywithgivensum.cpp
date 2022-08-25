#include<bits/stdc++.h>
using namespace std;


int givensum(int a[],int s,int n)
{

    int l=0,r=0;
    int sum=a[0];
    
    if (s==sum)
    {
        cout<<"element found between index"<<l<<"and"<<r<<endl;
    }

    while(l<n && l<=r && r<n)
    {
        if(sum==s)
        {
            cout<<"sum found between index "<<l<<"and"<<r<<endl;
        }
        else  if(sum<s)
        {
            sum=sum+a[r];
            r++;

        }
        else if (sum>s)
        {
            sum=sum-a[l];
            l++;

        }
    }


}
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;

    int a[n];
    cout<<"enter elements of array"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    
    int s;
    cout<<"enter sum of subarray"<<endl;
    cin>>s;

    cout<<givensum(a,s,n);

    




return 0;
}