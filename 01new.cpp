#include<iostream>
using namespace std;
struct Node
{ public:
int data;
Node* next;
public:
Node(int data1, Node*next1){
    data=data1;
    next=next1;

}
};
int main(){
    int arr[]={12,22,23,45};
    Node*y= new Node(arr[0],nullptr);
      return 0;}