#include<iostream>
using namespace std;
int main(){
    int i=2 ;
    cout<<i<<endl;
    cout<<"(i >> 1) will be\n";
    i >>=1;
    cout<< i<<"\n";
   // cin >> i + 4; //we can't add in cin operator
   cout<< (i >> 1)<< endl;
   cout<< (i >> 1)<<endl;
   cout<< (i >> -1);
      return 0;}