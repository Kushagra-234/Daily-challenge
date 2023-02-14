#include<bits/stdc++.h>
using namespace std;

   void rightrotate(int a[],int d,int n){
       d=d%n;
       reverse(a,a+n);
       reverse(a,a+d);
       reverse(a+d,a+n);

   }

   void leftrotate(int a[],int d,int n){
       d=d%n;
       reverse(a,a+n);
       reverse( a, a + (n - d));
       reverse(a + (n - d ) ,a+n);
   }
int main(){

    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
     int a[n];

     cout<<"enter elements of array"<<endl;

     for(int i=0;i<n;i++){
         cin>>a[i];
     }

     int d;
     cout<<"enter factor by which to rotate"<<endl;
     cin>>d;

     int p;
     cout<<"enter 0 for leftrotate and 1 for right rotate"<<endl;
     cin>>p;

     if(p==1)
     rightrotate(a,d,n);

      if(p==0)
      leftrotate(a,d,n);

     cout<<"After rotation array is"<<endl;

     for(int i=0;i<n;i++){
         cout<<a[i]<<endl;
     }
return 0;
}