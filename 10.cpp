#include <iostream> 
#include<cmath>
 using namespace std;
int main()
{
cout << "The amstrong number between 100 - 999 is " << endl;
int digit;
int sum = 0;
for (int i = 100; i <= 999; i++)
{
int n = i; while
(n != 0)
{
digit = n % 10; sum+= pow(digit, 3);
n = n / 10;
}
if (sum == i)
{
cout << i << endl;
}
sum = 0;
}
return 0;
}
