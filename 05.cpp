#include<iostream>
using namespace std;
int main(){
int n, sum;
sum = 0;
cout << "Enter the summation till nature number: ";
cin >> n; 
for(int i =1 ; i<=n ; i++)
{
sum += i;
}

cout << "The sum of  first "<<n<<" natural numbers is : "<<sum;
	
 return 0;
}
