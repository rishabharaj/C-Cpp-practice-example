#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st = "rishabharaj sharma";
    string st2;
    // opening files using constructor and reading it
    // ofstream out("sample.txt"); // write in file (out ke jagah kuchh bhi likh sakte ho)
    // out<<st;           // out isliye kyoki bracke te bahar out likha humne
    // out.close()     // close writing.

    ifstream in("sample.txt"); // read file 
    //in>>st2;                   // read and store in st2; only one string not line 
                            //( in isliye kyoki bracket ke bahar in likha hai humne)
    getline(in,st2);            // for reading line and store in st2
/* ofstream out;  // ofstream class ka out object.
out.open("sample.txt");   // sample file open kri and jo bhi hoga wo write hoga cout ka
cout<<"this is me";     

*/


    cout<<st2;
      return 0;} 