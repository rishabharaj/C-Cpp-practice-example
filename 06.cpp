#include<iostream>
using namespace std;
int main(){
 int n, digit, sum;
sum = 0;
cout << "Enter a number : ";
cin >> n;
 n =  abs(n);    		 // taking absolute value of n
while(n !=0 )
{
digit = n%10;	
sum += digit;
n = n/10;
}
cout << "The sum of the digits is: "<< sum; 
return 0;
}
