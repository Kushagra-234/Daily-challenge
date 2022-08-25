#include<iostream>
using namespace std;


  int kadene( int a[], int length)
    {



        int cursum=0;
        int highsum=0;

        for(int i=0;i<length;i++){
        cursum=max(a[i],cursum+a[i]);
        highsum=max(highsum,cursum);

        

    }

    return highsum;
    }
    
int main(){
    cout<<"enter length of array"<<endl;
    int l;
    cin>>l;

    int a[l];
    cout<<"enter elements of array"<<endl;
    for (int i = 0; i < l; i++)
    {
        cin>>a[i];
    }    
    
    cout<<"max sum is"<<kadene(a,l)<<endl;
  


return 0;
}
  


