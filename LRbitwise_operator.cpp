#include<iostream>
using namespace std;
int main(){
    int n,i,m,k;
    cin >> n >>i;
    n = n << i; // pow(2,i) se multiply
    cout << n << endl; 
    cin >> m >> k;
    m = m >> k ; // pow(2,k) se devide
    cout << m;
      return 0;
      }    // not working with decimal points digits