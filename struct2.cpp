#include <iostream>
using namespace std;

class student { public:
    int age ;
    string name;
    float marks ;
    
    void input() {
        cout<<"enter name: ";
        getline(cin, name);
        cout<<"name : "<<name;
    }
};

int main() {
    struct student s1 ;
    s1.input() ;
    return 0;
}