#include <iostream>
using namespace std;
int  main()
{
int n1, n2;
cout  <<  "Enter the range " << endl; 
cin >> n1>>n2;
int rev;
for (int i = n1; i <= n2; i++)
{
int og = i; while (og > 0)
{
rev = rev * 10 + og % 10;og
= og / 10;
}
if (rev == i)
{
cout << i << endl;
}
rev = 0;
}

return 0;
}
