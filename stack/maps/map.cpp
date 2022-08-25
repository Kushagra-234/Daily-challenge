#include<bits/stdc++.h>
using namespace std;
int main(){

    unordered_map<string,int>m;
    m["mera"]=1;
    m["tera"]=2;
    cout<<m.at("tera")<<endl;
    // kisi ke corresponding entry check krni ho kisi key ke corresponding to count use kro agar hai to 1 nhi to 0
    cout<<m.count("tera")<<endl;
    // for iteration
    unordered_map<string,int>::iterator it=m.begin();
    while(it !=m.end()){
        cout<<it->first<<""<<it->second<<endl;
        // it->first 
        // it->second 






        
    }

return 0;
}