#include<bits/stdc++.h>
using namespace std;
int reverse(int a[])
{


    
    int low=0;
    int high=4; 
    while(low<high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<endl;
    }
}

int main(){

    int a[5]={1,2,3,4,5};
    cout<<reverse(a);
}
    
    

    

