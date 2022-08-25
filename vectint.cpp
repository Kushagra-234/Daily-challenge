#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;

    cout<<"enter number of elements"<<endl;
    cin>>n;
    int a;

    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        v.push_back(a);
    }


    cout<<"elements of vector are"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<v.at(i);

    }

    for(int i=0;i<n;i++){
        
    }
    

    



 
 



return 0;
}