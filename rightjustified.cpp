#include<iostream>
#include<iomanip>  //for setw
using namespace std;
//setw(5) width chhod deta hai(right justified) space chhodne ke liye

int main(){
    int Basic = 950, Allowance = 95, Total = 1045;
    cout<< setw(10) << "Basic"<<setw(40)<<Basic<<endl;
    cout<< setw(20) << "Allowance"<<setw(5)<<Allowance<<endl;
    cout<< setw(5) << "Total"<<setw(10)<<Total<<endl;
    return 0;
}