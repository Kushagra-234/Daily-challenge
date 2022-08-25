/*#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
vector beautifulArray(int n) {
vectorans;
ans.push_back(1);
while(ans.size()<n)
{
vectort;
for(int i=0;i<ans.size();i++)
{
if(2ans[i]-1<=n)
{
t.push_back(2ans[i]-1);
}
}
for(int i=0;i<ans.size();i++)
{
if(2ans[i]<=n)
{
t.push_back(2ans[i]);
}
}
ans=t;
}
return ans;


int main()
{

}*/