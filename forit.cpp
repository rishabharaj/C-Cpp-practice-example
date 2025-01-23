#include<iostream>
using namespace std;
int main (){ 
    float x;
    float sum ;
    int i;
    for( i=1; i<6; i++){
        cin >> x;
        sum= sum +x;
    }
    float average;
    average = sum/(i-1);
    cout << average;
    return 0;
}
