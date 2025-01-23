#include<iostream>
using namespace std;
void merge(int a[], int b[],int n,int c[]){
    int i=0;
    int j=0;
    int k=0;
    int c[20];
while (a[i]>b[j]){
    k++;
    j++;
    c[k]= b[j];
                        }
while(a[i]<b[j]){
    k++;
    i++;
    c[k]=a[i];                  
                        } 
void show(int c[20]){
    for (int i = 0; i < 20; i++)
    {
        cout<<c[i]<<" ";
    }
    
}  
}

int main(){
    int a[]={10,5,8,1,3,6,8,11,20,4};
    int b[]={12,7,9,2,13,14,15,16,17,18};
    int c[20];
    int n= 10;
    merge( a, b, n,c);
      return 0;}