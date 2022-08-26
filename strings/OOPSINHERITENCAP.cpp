
#include<bits/stdc++.h>
using namespace std;

// encapsulation ka mtlb hota hai data hiding isme ham data members ko hide krte hai basically information ko hide krte hai
// advantage used in unit testing ,class ko read only bnata hai,data hiding se security bdhti hai
// agar saare data members ko ham hide kr de to fir totaly encapsulated class khte hai use 
// protected access modifier me ye hota hai ki ham use class ke andar aur subclass wale use kr skte hai bs
// aur koi nhi 
// ek class jab dusre class ki properties ko inherit krti hai to inheritance

class Hero{
    public:
    int age;
};

// ye public,protected,private mode of access hai  agar private hai member of base class to aap kabhi bhi use
// nhi kr skte uske members ko agar public hai to aaram se use kro maje maaro agr protected hai to sirf derived class use kr paegi
// 

class Superman:public Hero{
    public:
    int size;


};

int main(){
    Superman ramesh;
    cout<<ramesh.age<<endl;
}

// types of inheritance 
// single isme ek class ek superclass ko imherit krti hai 
// multilevel inheritance isme aisa hota hai hai aise ek level sa chal rha ho jaise b ne a ko inherit kiya aur 
// c ne b ko to fir c use kr skti hai a ki properties ko
// multiple isme ek class do class ki properties ko inherit krti hai 

class A{

};

class B{

};

class C:public A,public B{

};

// heirarchial isme ek hi class 2 ki parent hogi fir wo do 3 ki isse ek heirarchy si bnti chali jaagti hai
// hybrid combination of two or more inheritance is hybrid for eg-single+heirarchial

// polymorphism ka mtlb ability to exist in more than one form agar ek message ko ek se jyada form me exist krwa do to polymorphism
// two types 
// compile time,runtime 
// compile time polymorphism wo polymorphism hai jisme 
// compile timepolymorphism wo polymorphism hai jo resolev hota hai compile time me
// ye 2 tareeke se hota hai function overloading,operator overlaoding

    

