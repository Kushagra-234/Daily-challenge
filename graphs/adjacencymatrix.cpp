#include<bits/stdc++.h>
using namespace std;
// declareation usi g adjacency matrix
// n number of nodes 
// m number of edges 

int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1][n+1];
    // agar indexing 1 se ho to
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        a[u][v]=1;
        a[v][u]=1;

        // weighted graph 

    }

    
}