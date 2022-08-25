
#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"enter your string"<<endl;
    cin>>s;

    transform(s.begin(),s.end(),s.begin(),::tolower);


    cout<<"string is"<<s<<endl;

return 0;
}