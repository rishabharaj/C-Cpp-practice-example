#include <iostream>
using namespace std;
struct student {
    int age ;
    char name[20];
    float marks ;
    void input() {
        cout<<"enter name: ";
        cin>>name ;
        cout<<"name : "<<name;
    }
};
int main() {
    struct student s1 ;
    s1.input() ;
    return 0;
}