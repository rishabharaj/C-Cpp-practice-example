#include<iostream>
using namespace std;
int main(){
    int d[] = {12, 2, 7, 18, 9, 16, 1, 26};
    for(int i =1; i<8; i++){
        for(int j=i-1;j>=0; j--)
        {
            if(d[j+1]>d[j]){}
            else {int x=d[j];
                d[j]=d[j+1];
                d[j+1]=x;}
        }
    }
    
 for(int i=0; i<8;i++){
    cout<<d[i];
    cout<<endl;
 }
      return 0;}
