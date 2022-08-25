#include<bits/stdc++.h>
using namespace std;

bool ismatching(string str){
    stack<char>s;
    
    for(int i=0;i<str.length();i++){
        char cur=str.charAt(i);
    
        if(isopening(cur)){

            s.push(cur);

        
    }
    else {
        if(s.empty())
            return false;
        
    

     else if  ( !ismatching(s.peek(),cur))
            return false;
    
        
    
    else
        s.pop();
    
    
    }
    
   
   
    
    
    
}
bool isopening(char c){
    return( c=='('||
     c=='{'|| 
     c=='[');
    


}

bool ismatching(char a,char b){
    return (a=='(' && b==')') ||
           (a='{' && b=='}') ||
           (a='[' && b==']');

}



int main(){
    cout<<"enter your string"<<endl;
    string str;
    cin>>str;
    cout<<"it is balanced parenthesis";

return 0;
}