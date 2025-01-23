#include<iostream>
using namespace std;
class student
{
private: 
    int age;
    char name[20];
    float marks;
    public:
    void getdata(){
        cout<<"enter name : ";
        cin>>name;
        cout<<name<<endl;
    }
};

int main() {
    student s1;
    s1.getdata();
    cout<<sizeof(s1);
}