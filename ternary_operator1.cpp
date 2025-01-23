// C++ program to illustrate the use of ternary operator 
#include <iostream> 
using namespace std; 
int main() 
{ 
	// creating a variable 
	int num, test = 40; 
	// assigning the value of num based on the value of test 
	// variable 
	num = test < 10 ? 10 : test + 10; 
	printf("Num - Test = %d", num - test); 
	return 0; 
}
