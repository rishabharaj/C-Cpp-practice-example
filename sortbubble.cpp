#include<iostream>
using namespace std;
void bubblesort(int *arr, int n){
bool swapped;
    for(int i=0;i<n; i++){
        swapped = false;
        for(int j=0; j < n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            swapped = true;
            }
        }   if(swapped == false){
            break;}
    }
}
void printarry(int arr[],int n){ for (int i = 0; i < n; i++){ 
            cout<<" "<<arr[i]; }  }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<"unsorted array"<<endl;
    printarry(arr,n);
    cout<<endl;
    bubblesort(arr,n);
    cout<<"sorted array"<<endl;
    printarry(arr,n);
      return 0;}