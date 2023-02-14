#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<<"enter a number"<<endl;

    int n;
    cin>>n;

    if(n%2!=0)
    cout<<"it is a odd number"<<endl;

    else
    cout<<"it is even"<<endl;


return 0;
}


// select * from emp e1 where n-1=(select count(Distinct salary) from emp e2 where e2.salary>e1.salary)