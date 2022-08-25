#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter number of elements"<<endl;
    int n;
    cin>>n;

    int a[n];
    cout<<"enter elements of array"<<endl;

    for(int i=0;i<n;i++){

        cin>>a[i];
    }


    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

return 0;
}