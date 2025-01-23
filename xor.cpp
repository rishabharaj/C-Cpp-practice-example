#include<iostream>
using namespace std;
int main(){
    int arr[]={2, 2, 4, 5, 4, 5, 6, 7, 8, 9};
    int size=10;
    int num=0;
    int l=1;
    for(int i=0; i<size;i++){
        cout<<l<<" ";
       // cout<<num;
        num = num^arr[i];
        cout<<num<<endl;
        l++;
    };
      return 0;}