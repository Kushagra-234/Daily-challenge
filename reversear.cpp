#include<bits/stdc++.h>
using namespace std;

int reverse(int a[],int low,int high )
{
    
    
    while(low<high)
    {
    swap(a[low],a[high]);
    low++;
    high--;
    }
return 0;

}
int main(){
    int low,high,n;
    cin>>n;
    int low=0;
     int high=n-1;

    int a[n];
    // vector<int>v={1,2,3,4,5};
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    cout<<"after reversal array is "<<reverse(a,low,high)<<endl;

return 0;
}