#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;

    vector<int> a[n+1];
    for (int i = 0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;

        a[u].push_back(v);
        a[v].push_back(u);

    }

    // agar weighted ho to 
    vector<pair<int,int>> a1[n+1];
    for (int i = 0; i <m; i++)
    {
        int u1,v1,wt;
        cin>>u1>>v1>>wt;
        a1[u1].push_back({v1,wt});
        a1[v1].push_back({u1,wt});
    }
    
    

return 0;
}