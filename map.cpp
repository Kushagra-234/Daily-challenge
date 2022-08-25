#include<bits/stdc++.h>
using namespace std;
int main(){
     map<int,string>m;
     m.insert({4,"manu"});
    //  map<int,string>::iterator it;x  

     for(auto &pr:m){
         cout<<pr.first<<" "<<pr.second<<endl;
     }
    

return 0;
}