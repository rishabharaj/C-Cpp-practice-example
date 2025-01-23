#include<iostream>
using namespace std;
void factors(int n)
{
for(int i = 1; i<=n/2 ; i++)
{
if(n%i == 0)
{
cout<<i<<" ";
}
}
}
int main()
{
int a;
cout<<"Enter a number : ";
cin>>a;
cout<<"The factors of the given number is "<<endl;
factors(a);
 return 0;
                      }
