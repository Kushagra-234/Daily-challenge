#include<bits/stdc++.h>
using namespace std;

int maxprofit(vector<int> &v)
{
    cout<<"enter  number of elements "<<endl;
   
    int a;

    for (int i = 0; i <v.size(); i++)
    {
        cin>>a;
        v.push_back(a);
    }
    

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
    
    


    vector<int> v={7,1,5,6,8};
    cout<<"max profit is"<<maxprofit(v);    /* code */




return 0;
}