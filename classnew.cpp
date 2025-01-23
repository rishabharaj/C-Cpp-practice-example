#include <iostream>
using namespace std;
template <typename T>
class Node{
public:
    int Value;
    Node * Next;
    Node(T value) : Value(value), Next(NULL) {

    }
};
template<typename T>
void PrintNode(Node<T> *node){
    while (node != NULL) {
        cout << node->Value << " - > ";
        node = node->Next;
    }
    cout << "NULL" << endl;
}

template<typename T>
class LinkedList {
private:
    int myCount;
public:
    Node<T> *Head;
    Node<T> *Tail;

    LinkedList();

    Node<T> *Get(int index);

    //Insert Operations
    void InsertHead(T val);
    void InsertTail(T val);
    void Insert(int index, T val);

    //Remove operations
    void RemoveHead();
    void RemoveTail();
    void Remove(int index);

    //Search operation
    int Search(T val);

    // Addition Operations
    int Count();

    void PrintList();


};

int main() {

    Node<float> *node1 = new Node<float>(3.14);
    Node<float> *node2 = new Node<float>(6.92);
    Node<float> *node3 = new Node<float>(9.25);

    node1->Next = node2;
    node2->Next = node3;

    PrintNode(node1);
    return 0;
}