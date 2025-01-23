// C++ program to find the largest of the three number using 
// ternary operator 
#include <iostream> 
using namespace std; 
int main() 
{	int A = 39, B = 10, C = 23; 
	// Evaluate largest of three using ternary operator 
	int maxNum 
		= (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C); 
	cout << "Largest number is " << maxNum << endl; 
	return 0; 
}
