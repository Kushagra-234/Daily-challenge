#include<bits/stdc++.h>
using namespace std;


class Hero{

    public:
    char name[20];
    int size;
    // ye default constructor hai hero jb banta hai object to ye apne aap call hota hai agar ham khud se bna le
    // ise to fir compiler nhi bnata default constructor 

     Hero(){
        cout<<"constructor called"<<endl;
    }
    // agar default constructor call nhi hoga to bina parameter wala object bhi call nhi hoga aur nhi ho paega 


    Hero(int size){
        this->size=size;
    }

    void print(){
        cout<<size<<endl;
    }

};

int main(){
    cout<<"hi"<<endl;
    Hero ramu(20);

    Hero M(ramu);
    M.print();
    // ye  hai iss line ka mtlb
    // copy constructor bhi apne aap bnta hai aur apne aap call hota hai ise ham bna bhi skte hai bahar se
    // M->size=ramu->size
    // copy constructor shallow copy bnata hai mtlb same memory ko access krta hai do alag naam se to agar change hoga
    // ramu me to wo reflect hoga M me bhi agar isse bachna hai to deep copy bnao shallow copy nhi 
    // destructor ka use hota hai memory ko de allocate krne ke liye ye bhi khud ba khud call hota hai
    // jaise hi class banti hai waise hi bn jata   hai ye static members ke liye call nhi krna pdhta jbki dynamic members ke liye
    // ise manually call krna pdhta hai 
    // static function aur static member object ko nhi class ko belong krte hai 
    // this keyword ka istemaal nhi ho skta static functions me aur ye sirf static variable ko hi access kr skte hai 

    Hero manu(10);
    manu.print();

}

