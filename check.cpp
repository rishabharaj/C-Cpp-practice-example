#include<iostream>
using namespace std;
class base{ public:
    base(){
        cout<<"constructor of base"<<endl;
    }
};
class derived : public base{ public:
    derived(){ cout<<"constructor of derived"<<endl;}
};
int main(){
    base b;
    derived c;
    
      return 0;}