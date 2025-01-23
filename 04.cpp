#include<iostream>
using namespace std;
int main (){
int n , count = 0;
cout << "Enter any number :  "; 
cin >> n;
if(n==1){ cout<<" not prime nor composite number";}
else { for(int i = 1; i<=n ; i++)
{
if(n%i == 0 )
{	count++ ;
}}
if(count == 2) {
cout <<  n << " is prime number" ;
}
	else	{ 
		cout << n << " is composite number"; 
}}
return 0;
}
