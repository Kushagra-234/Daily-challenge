#include<bits/stdc++.h>
using namespace std;

int main(){

    int low,high;
    cout<<"enter"<<endl;
    cin>>low;
    cout<<"enter high"<<endl;
    cin>>high;
     
     for(int n=low;n<=high;n++){
         int factors=0;
         for(int i=2;i<=n/2;i++){
             if(n%i==0)
             factors++;
             break;
         }

         if(factors==0){
         cout<<n<<endl;
     }
     }

     
     
     }

    
    
   
   
    
