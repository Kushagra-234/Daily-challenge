#include<bits/stdc++.h>
using namespace std;


class manu{

};
// class is user defined datatype 
// agar khaali class bna do to fir object ko memory milegi 1 byte wrna utni milegi jitni properties ko milti hai 


manu h1;


class Hero{
    private:
    int health;

    public:

    char level;

    int gethealth(){
        return health;
    }

    void sethealth(int h){
        health=h;

    }
  };

    // sirf class ke andar hi private kre hue members ko use kra jaa skta hai class ke bahar inhe use nhi kra jaa skta
    // agar use krna hai to getter aur setter ki madad se kro

    int  main(){
        Hero ramesh;
        // ye hota hai data to statically allocate krna;
        Hero *b=new Hero;
        // cout<<b->level<<endl;
        // b me address pda hoga use derefrence kroge to aaega value
        // heap me memory allocate hogi 
        // dynamically allocate krna memory ko 
        
        cout<<ramesh.level<<endl;
        cout<<ramesh.gethealth()<<endl;
        ramesh.sethealth(70);
        cout<<ramesh.gethealth()<<endl;
    }

// ramesh cin
