#include<bits/stdc++.h>
using namespace std;


int merge(int arr,int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int l[n1];
    int m[n2];
    // int k=low;
    for (int i = 0; i < n1; i++)
    {
        // l[i]=arr[i];
        

    }

for (int j = 0; j<n2; j++)
{
    // m[j]=arr[mid + 1 + j];
}


    

}

int mergesort(int arr,int low,int high)
{
    int mid;
    int inversion;
    if (high>low)
    {
        mid=(high+low)/2;
       inversion+= mergesort(arr,low,mid);
        inversion+=mergesort(arr,mid+1,high);
       inversion+= merge(arr,low,mid,high);
        
    }
}





int main(){
    // int arr={5,8,9,11};

return 0;
}