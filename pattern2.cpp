#include<iostream>
using namespace std;
int main(){
    int colm, row;
    cin>>colm>>row;    // input me row jyada rkhna colm kam
        for(int i=2; i<=row+1;++i){
            // for(int j=0; j<colm; ++j){ // agar colum times each row me print krma ho
             for(int k=0; k<i-1;k++){    // to hoga but row times badta jayega
                cout<<"1";               
           //  }
             } cout<<endl;
        }
    return 0;
}