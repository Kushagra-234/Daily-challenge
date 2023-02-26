class Stack{
    public:
    int size;
    int top;
    int *arr;

    Stack(int size ){
        this->size=size;
        this->top=-1;
        this->arr=new int[size]; 
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;


        }
    }

    int  peek(){
        if (top>=0)
        return arr[top];

        else
        return -1;
    }
};

#include<bits/stdc++.h>

using namespace std;

int main(){
Stack st(5);
st.push(5);
cout<<st.peek()<<endl;
// cout<<st;
return 0;
}



// stack top is topmost element returned by stack.top();