#include<bits/stdc++.h>
using namespace std;
int main(){

    string s1="geeksforgeeks";

    map<char,int>m;

    for (int i = 0; i < s1.length(); i++)
    {
        m[s1[i]]++;

    }
    for(auto it:m)
    {
        if(it.second>1)
        {
            cout<<it.first<<" "<<"count="<<it.second<<endl;
        }
    }
    

return 0;
}