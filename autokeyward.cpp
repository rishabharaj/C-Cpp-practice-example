// C++ program to demonstrate 
// working of auto keyword 

#include <bits/stdc++.h> 
// #include<typeinfo>
using namespace std; 

// Driver Code 
int main() 
{ 
	// Variables 
    auto a = 1;
    auto b = "name";
	auto an_int = 26; 
	auto a_bool = false; 
	auto a_float = 26.24; 
	auto ptr = &a_float; 

	// Print typeid 
	cout << typeid(a_bool).name() << "\n"; 
	cout << typeid(an_int).name() << "\n"; 
//comparing
    if (typeid(a) == typeid(b)) {
    std::cout << "a and b are of the same type" << std::endl;
} else {
    std::cout << "a and b are of different types" << std::endl;
}

	return 0; 
}
