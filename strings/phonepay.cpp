
#include <bits/stdc++.h>
using namespace std;

vector<int> batonPass(int n, long t){
  
  vector<int> ans;
  
  int oddEven = 1,count=0;
    
    while(true){
      
      if(oddEven & 1){
        if(count==0){
          for(int i=0 ; i<n ; i++){
            count++;
            if(t == count){
              if(i!=n-1){
                // cout << i+1 << " " << i+2;
                ans.push_back(i+1);
                ans.push_back(i+2);
                return ans;
              }else{
                ans.push_back(i+1);
                ans.push_back(i);
                return ans;
              }
            }
          }
        }else{
          for(int i=1 ; i<n ; i++){
            count++;
            if(t == count){
              if(i!=n-1){
                ans.push_back(i+1);
                ans.push_back(i+2);
                return ans;
              }else{
                ans.push_back(i+1);
                ans.push_back(i);
                return ans;
              }
            }
          }
        }

        oddEven++;
      }else{
        for(int i = n-2 ; i>=0 ; i--){
          count++;
          if(t == count){
            if(i!=0){
                ans.push_back(i+1);
                ans.push_back(i);
                return ans;
            }else{
                ans.push_back(i);
                ans.push_back(i+1);
                return ans;
            }
          }
        }
        oddEven++;
      }
    }
  
}

int main() 
{
    int friends,timee;
    cin >> friends >> timee;
    
    vector<int> ans = batonPass(friends,timee);
    for(auto it : ans) cout << it << " ";
    return 0;
}