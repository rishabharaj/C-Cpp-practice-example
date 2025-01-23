#include<stdio.h>
void storeTable(int arr[][10], int n, int m , int number);
int main(){
int Table[2][10];
storeTable(Table,0,10,2);
storeTable(Table,1,10,3);
for(int i=0; i<10; i++){
    printf("%d\t",Table[0][i]);
}
printf("\n");
for(int i=0; i<10; i++){
    printf("%d\t",Table[1][i]);
}
return 0;}  // first[] pointers jese hai lekin dusra [] ke liye value define krna padta hai
void storeTable(int arr[][10], int n, int m , int number){
for(int i=0; i<m; i++){
    arr[n][i]= number*(i+1);
}
}