
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter string"<<endl;

    string s;
    cin>>s;
    string strrev;

    
    for(int i=s.length()-1;i>=0;i--){
        strrev.push_back(s[i]);
        
    }

    cout<<strrev<<endl;


return 0;
}