#include<iostream> 
using namespace std;
int factorial(int n)
{
int fact = 1;
for (int i = 1; i <= n; i++)
{
fact *= i;
}
return fact;
}
int main()
{
int n;
cout << "Enter a natural number: "; 
cin >> n;
int result = factorial(n);
cout << "The value of " << n<< " factorial is : "<<result; 
return 0;
}
