#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
        this->arr=new int[size];
        this->top=-1;
    }
    void push(int element){
        if(size-top > 1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }


    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is underflowed"<<endl;
        }

    }
    int peek(){
        if(top>=0)
           return arr[top];
           else{
               cout<<"stack is empty"<<endl;
               return -1;
           }
        

    }

    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

};


int main(){
    Stack st(5);
    st.push(22);
    st.push(13);
    st.push(20);
    cout<<"peek element is "<<st.peek()<<endl;


return 0;
}