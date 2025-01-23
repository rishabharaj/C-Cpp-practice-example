#include<stdio.h>
    void reversarray(int array[], int n);
    void printreverse(int array[],int n);
    int main(){
    int array[]= {1, 2, 3, 4, 5, 6};
    reversarray(array,6);
    printreverse(array,6);   // array me calls by default call by refference hi hai
                        // because array khud ek pointer hai int value real me change ho jati hai
return 0;}
void reversarray(int array[],int n){
    for(int i=0; i<n/2; i++){
        int firstarray= array[i];
        int secondarray= array[n-i-1];
        array[i]= secondarray;
        array[n-i-1]= firstarray;}}
void printreverse(int array[],int n){
    for (int i = 0; i < 6; i++)
         { printf("%d\t",array[i]);}}        