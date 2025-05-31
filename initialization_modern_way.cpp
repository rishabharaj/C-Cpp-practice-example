// Uniform initialization
// In modern C++, you can use brace initialization for any type. 
// This form of initialization is especially convenient 
// when initializing arrays, vectors, or other containers. 
// In the following example, v2 is initialized with three instances of S. 
// v3 is initialized with three instances of S that 
// are themselves initialized using braces. The 
// compiler infers the type of each element based on the declared type of v3.
#include <vector>

struct S
{
    std::string name;
    float num;
    S(std::string s, float f) : name(s), num(f) {}
};

int main()
{
    // C-style initialization
    std::vector<S> v;
    S s1("Norah", 2.7);
    S s2("Frank", 3.5);
    S s3("Jeri", 85.9);

    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);

    // Modern C++:
    std::vector<S> v2 {s1, s2, s3};

    // or...
    std::vector<S> v3{ {"Norah", 2.7}, {"Frank", 3.5}, {"Jeri", 85.9} };

}
