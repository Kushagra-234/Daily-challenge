#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"enter your string"<<endl;
    cin>>s;
    int temp=0;

    for(int i=0;i<s.length();i++){
        temp=s[i] + temp;
       
       


    }
    if(temp % 3 ==0){
        cout<<"divisible"<<endl;
    }
    else{
        return 0;
    }

return 0;
}