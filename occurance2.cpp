#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,6,8,2,9,4,7,8,1,2,4,5};
    int arr2[]={1, 2, 3, 4, 2, 5, 2, 6, 7, 2, 3, 3};
    int count=0;
    bool milgya=false;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n;i++){
        for(int j=i+1; j<=n;j++){
            if(arr2[i]==arr2[j]){
                count++;
                bool milgya=true;
                cout<<arr[i]<<"  ";

            }
        } //if( milgya==false){cout<<arr[i]<<"  ";}
    } cout<<endl<<count;
      return 0;}