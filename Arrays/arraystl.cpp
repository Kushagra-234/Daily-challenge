#include<iostream>
#include<array>


using namespace std;

int main(){
    // array use karne ke liye uski library bhi use kro
    

    array<int,4>a={1,2,3,4};
    // intialization of array 

    int size=a.size();
    cout<<size<<endl;

    cout<<a.at(2)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    // back se aakhri element 
    // vector dynamic array ye double kr leta hai memory ko



}

