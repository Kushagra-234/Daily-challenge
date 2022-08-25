#include<bits/stdc++.h>
using namespace std;
int main(){


    string s;
    cout<<"enter string"<<endl;
    cin>>s;
    string srev;

    for (int i = s.size()-1; i>=0; i--)
    {
        srev.push_back(s[i]);
    }

    // push back function peeche se push back krta hai values ko 
    
    cout<<srev<<endl;

return 0;
}