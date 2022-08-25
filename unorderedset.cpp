#include<bits/stdc++.h>
using namespace std;
int main(){


    unordered_set<int>s;
    s.insert(5);
    s.insert(12);
    s.insert(14);
    s.insert(20);

    // for(auto it:)
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<endl;
    }

return 0;
}