#include<iostream>
using namespace std;
int main (){
int n;
cout << "Enter a number: ";
cin >> n;
int rev, sum;
rev = sum = 0;
while(n !=0)
{
rev = rev*10 + n%10;
n = n/10;
}
cout << "The reverse of the number is: " << rev;
return 0;
}
