#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string s;
    ll n, i, j, a[26]={0};
    cin>>s;
    n = s.size();
    for(i=0;i<n;i++){
        if(s[i] == ' ')  continue;
        if('Z' >= s[i])
            a[int(s[i]-'A')]++;
        else
            a[int(s[i]-'a')]++;
    }
    for(i=0; i<n; i++){
        if(s[i] == ' ')  continue;
        if('Z' >= s[i]){
            if(a[int(s[i]-'A')])
                cout<<s[i]<<'-'<<a[int(s[i]-'A')]<<"\n";
            a[int(s[i]-'A')] = 0;
        }
        else{
            if(a[int(s[i]-'a')])
                cout<<char(s[i]-32)<<'-'<<a[int(s[i]-'a')]<<"\n";
            a[int(s[i]-'a')] = 0;
        }
    }
    unordered_map
	return 0;
}