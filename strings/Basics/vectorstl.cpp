#include<iostream>
#include<vector>

using namespace std;

int main()
{

    vector<int> v;
    cout<<v.capacity()<<endl;

    v.push_back(2);
    cout<<v.capacity()<<endl;

    v.push_back(33);
    cout<<v.capacity()<<endl;

    v.push_back(4);
    cout<<v.capacity()<<endl;

// vector me 
    


}