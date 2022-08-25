

#include<bits/stdc++.h>
using namespace std;
int main(){

    string s="my name is kussu";

    map<char,int>m;

    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }

    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }

return 0;
}