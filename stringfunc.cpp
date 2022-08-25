#include<bits/stdc++.h>
using namespace std;
int main(){


    string str="abcdefgh";
  /*  str.clear();
    if (str.empty())
    cout<<"string is empty"<<endl;*/
    // str.erase(2,2);
    // cout<<str<<endl;


    str.insert(2,"lol");
    // cout<<str<<endl;

    string s1=str.substr(2,4);
    cout<<s1<<endl;
    // + append krta hai string me 

    // sort(s1.begin(),s1.end());
    reverse(str.begin(),str.end());

    cout<<str<<endl;



return 0;
}