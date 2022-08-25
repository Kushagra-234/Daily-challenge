#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<<"enter number of elements in array in row"<<endl;
    int n;
    cin>>n;
     cout<<"enter number of elements in array in coloumn"<<endl;
     int m;
     cin>>m;


    cout<<"enter elements of array"<<endl;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        
        
    }

 


    

return 0;
}