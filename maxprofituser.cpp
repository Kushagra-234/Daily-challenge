#include<bits/stdc++.h>
using namespace std;

int maxprofit(vector<int> &v, int n)
{
    // cout<<"enter  number of elements "<<endl;
   


int maxpro=0;
int minprice=INT_MAX;

for (int i = 0; i < v.size(); i++)
{
    minprice=min(minprice,v[i]);
    maxpro=max(maxpro,v[i]-minprice);

}
return maxpro;

}





int main(){
    int n;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    int a;
    vector<int>v;
    cout<<"enter elements"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
        


    cout<<"max profit is "<<maxprofit(v,n);    /* code */




return 0;
}