#include<iostream>
#include<string>
using namespace std;
class student {
    int age;
    char name[];
    public:
    void getdata(){
        cout<<"enter name : ";
        gets(name);
        cout<<"enter age : ";
        cin>>age;
    }
    void putdata(){
        cout<<"name is : "<<name<<endl;
        cout<<"age is  : "<<age;
    }
};
int main(){
    student s1;
    s1.getdata();
    s1.putdata();

    return 0;
}
