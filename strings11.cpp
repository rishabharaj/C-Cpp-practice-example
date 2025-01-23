#include<iostream>
#include<string>
using namespace std;
int main(){
    char name[50];
        cout<<"enter your first name : ";
      cin>>name;
        int x= printf("%s\0",name);
        cout<<"\n"<<"number of letters in your name "<<name<<" are "<<x;
    
      return 0;}